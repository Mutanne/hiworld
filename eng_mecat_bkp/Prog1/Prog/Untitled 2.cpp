#include <windows.h>

// define o nome da classe de janela
const char nomeJanela[] = "aCodigos";

// esta é a Window Procedure
LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM
  wParam, LPARAM lParam){
    switch(msg){
      case WM_CLOSE:
        DestroyWindow(hwnd);
        break;
      case WM_DESTROY:
        PostQuitMessage(0);
        break;
      default:
        return DefWindowProc(hwnd, msg, wParam,
          lParam);
    }

  return 0;
}

// função de entrada da aplicação
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE
    hPrevInstance, LPSTR lpCmdLine, int nCmdShow){
  WNDCLASSEX wc;
  HWND hwnd;
  MSG Msg;

  // vamos registrar a Window Class
  wc.cbSize = sizeof(WNDCLASSEX);
  wc.style = 0;
  wc.lpfnWndProc = WndProc;
  wc.cbClsExtra = 0;
  wc.cbWndExtra = 0;
  wc.hInstance = hInstance;
  wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
  wc.hCursor = LoadCursor(NULL, IDC_ARROW);
  wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
  wc.lpszMenuName = NULL;
  wc.lpszClassName = nomeJanela;
  wc.hIconSm = LoadIcon(NULL, IDI_APPLICATION);

  if(!RegisterClassEx(&wc)){
    MessageBox(NULL, "Erro ao registrar a janela!",
      "Erro!", MB_ICONEXCLAMATION | MB_OK);
    return 0;
  }

  // cria a janela
  hwnd = CreateWindowEx(WS_EX_CLIENTEDGE, nomeJanela,
    "Minha primeira aplicação Win32",
    WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT,
    350, 200, NULL, NULL, hInstance, NULL);

  if(hwnd == NULL){
    MessageBox(NULL, "Erro ao criar a janela!",
      "Erro!", MB_ICONEXCLAMATION | MB_OK);
    return 0;
  }

  // mostra a janela
  ShowWindow(hwnd, nCmdShow);
  UpdateWindow(hwnd);

  // Este é o laço de mensagens (Message Loop)
  while(GetMessage(&Msg, NULL, 0, 0) > 0){
    TranslateMessage(&Msg);
    DispatchMessage(&Msg);
    Writeline("Funciona mesmo!", "Programa");
  }

  return Msg.wParam;
}

