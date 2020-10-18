def myFun(**kwargs): 
    print(kwargs)
    if 'las' in kwargs.keys():
        print(kwargs['last'])
    """for key, value in kwargs.items():
        print ("%s == %s" %(key, value))"""
 
# Driver code 
myFun(mid ='for', first ='Geeks', last='Geeks')  