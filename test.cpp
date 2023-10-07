###assingment 1
###261941948
###ALL THESE HAVE BEEN USED IN MULTIPLE FUNCTIONS HENCE GLOBAL.

global row1a
global row1b
global row1c
global row2a
global row2b
global row2c
global row3a
global row3b
global row3c
global r1a
global r1b
global r1c
global r2a
global r2b
global r2c
global r3a
global r3b
global r3c
global user_id
global name
global user_password
global admin_id
global admin_password
admin_id="Ali"
admin_password="1122"
user_password="1234"
name="PIA"
row1a=1
r1a="*"
row1b=1
r1b="*"
row1c=1
r1c="*"
row2a=1
r2a="*"
row2b=1
r2b="*"
row2c=1
r2c="*"
row3a=1
r3a="*"
row3b=1
r3b="*"
row3c=1
r3c="*"
user_id="Amir"



#FOR USER SEAT BOOKING        
            
def array():

    global row1a
    global row1b
    global row1c
    global row2a
    global row2b
    global row2c
    global row3a
    global row3b
    global row3c
    global r1a
    global r1b
    global r1c
    global r2a
    global r2b
    global r2c
    global r3a
    global r3b
    global r3c
    global user_id
    global name
    name="PIA"
    row1a=1
    r1a="*"
    row1b=1
    r1b="*"
    row1c=1
    r1c="*"
    row2a=1
    r2a="*"
    row2b=1
    r2b="*"
    row2c=1
    r2c="*"
    row3a=1
    r3a="*"
    row3b=1
    r3b="*"
    row3c=1
    r3c="*"
    user_ser_id="Amir"

    print         ("A    B    C")
    print("ROW1", (r1a, r1b, r1c))
    print("ROW2", (r2a, r2b, r2c))   
    print("ROW3", (r2a, r3b, r3c))
    selection=input("SELECT SEAT: ")
    if selection=="r1a" and row1a==1:
        r1a="x"
        row1a=0
        print("NAME: ",user_id)
        print("FLIGHT: PIA")
        print("SEAT: ROW 1, SEAT A")
        with open('flight.txt','wt') as f:
            print('NAME: ',user_id,file=f)
            print('FLIGHT: PIA', file=f)
            print('SEAT: ROW 1, SEAT A',file=f)
        yes_no()
            
    elif selection=="r1a" and row1a==0:
        print("SEAT NOT AVIALABLE")
        yes_no()

    elif selection=="r1b" and row1b==1:
        r1b="x"
        row1b=0
        print("NAME: ",user_id)
        print("FLIGHT: PIA")
        print("SEAT: ROW 1, SEAT B")
        with open('flight.txt','wt') as f:
            print('NAME: ',user_id, file=f)
            print('FLIGHT: PIA', file=f)
            print('SEAT: ROW 1, SEAT B', file=f)
        yes_no()

    elif selection=="r1b" and row1b==0:
        print("SEAT NOT AVIALABLE")
        yes_no()


    elif selection=="r1c" and row1c==1:
        r1c="x"
        row1c=0
        print("NAME: ",user_id)
        print("FLIGHT: PIA")
        print("SEAT: ROW 1, SEAT C")
        with open('flight.txt','wt') as f:
            print('NAME: ',user_id, file=f)
            print('FLIGHT: PIA', file=f)
            print('SEAT: ROW 1, SEAT C', file=f)
        yes_no()

    elif selection=="r1c" and row1c==0:
        print("SEAT NOT AVIALABLE")
        yes_no()

    
    elif selection=="r2a" and row2a==1:
        r2a="x"
        row2a=0
        print("NAME: ",user_id)
        print("FLIGHT: PIA")
        print("SEAT: ROW 2, SEAT A")
        with open('flight.txt','wt') as f:
            print('NAME: ',user_id, file=f)
            print('FLIGHT: PIA', file=f)
            print('SEAT: ROW 2, SEAT A', file=f)
        yes_no()

    elif selection=="r2a" and row2a==0:
        print("SEAT NOT AVIALABLE")
        yes_no()
    
    elif selection=="r2b" and row2b==1:
        r2b="x"
        row2b=0
        print("NAME: ",user_id)
        print("FLIGHT: PIA")
        print("SEAT: ROW 2, SEAT B")
        with open('flight.txt','wt') as f:
            print('NAME: ',user_id, file=f)
            print('FLIGHT: PIA', file=f)
            print('SEAT: ROW 2, SEAT B', file=f)
        yes_no()

    elif selection=="r2b" and row2b==0:
        print("SEAT NOT AVIALABLE")
        yes_no()
        
    elif selection=="r2c" and row2c==1:
        r2c="x"
        row2c=0
        print("NAME: ",user_id)
        print("FLIGHT: PIA")
        print("SEAT: ROW 2, SEAT C")
        with open('flight.txt','wt') as f:
            print('NAME: ',user_id, file=f)
            print('FLIGHT: PIA', file=f)
            print('SEAT: ROW 2, SEAT C', file=f)
        yes_no()

    elif selection=="r2c" and row2c==0:
        print("SEAT NOT AVIALABLE")
        yes_no()
    
    elif selection=="r3a" and row3a==1:
        r3a="x"
        row3a=0
        print("NAME: ",user_id)
        print("FLIGHT: PIA")
        print("SEAT: ROW 3, SEAT A")
        with open('flight.txt','wt') as f:
            print('NAME: ',user_id, file=f)
            print('FLIGHT: PIA', file=f)
            print('SEAT: ROW 3, SEAT A', file=f)
        yes_no()

    elif selection=="r3a" and row3a==0:
        print("SEAT NOT AVIALABLE")
        yes_no()

    elif selection=="r3b" and row3b==1:
        r3b="x"
        row3b=0
        print("NAME: ",user_id)
        print("FLIGHT: PIA")
        print("SEAT: ROW 3, SEAT B")
        with open('flight.txt','wt') as f:
            print('NAME: ',user_id, file=f)
            print('FLIGHT: PIA', file=f)
            print('SEAT: ROW 3, SEAT B', file=f)
        yes_no()
        
    elif selection=="r3b" and row3b==0:
        print("SEAT NOT AVIALABLE")
        yes_no()

    elif selection=="r3c" and row3c==1:
        r3c="x"
        row3c=0
        print("NAME: ",user_id)
        print("FLIGHT: PIA")
        print("SEAT: ROW 3, SEAT C")
        with open('flight.txt','wt') as f:
            print('NAME: ',user_id, file=f)
            print('FLIGHT: PIA', file=f)
            print('SEAT: ROW 3, SEAT C', file=f)
        yes_no()
            
    elif selection=="r3c" and row3c==0:
        print("SEAT NOT AVIALABLE")
        yes_no()
        
    else:
        print("INVALID")
        yes_no()
        


#TO PROVIDE INTERFACE
        
def book_ticket():


    print("AVIALABLE FLIGHTS:")
    print("1.", name,":")
    booking=input("SELECT AIRLINE: ")
    if booking=="1":
        array()
    else:
        print("INVALID")
        yes_no()

#TO CANCEL USER SEAT BOOKING

def cancel_book():

    global row1a
    global row1b
    global row1c
    global row2a
    global row2b
    global row2c
    global row3a
    global row3b
    global row3c
    global r1a
    global r1b
    global r1c
    global r2a
    global r2b
    global r2c
    global r3a
    global r3b
    global r3c
    row1a=1
    r1a="*"
    row1b=1
    r1b="*"
    row1c=1
    r1c="*"
    row2a=1
    r2a="*"
    row2b=1
    r2b="*"
    row2c=1
    r2c="*"
    row3a=1
    r3a="*"
    row3b=1
    r3b="*"
    row3c=1
    r3c="*"




    c_selection=input("PLEASE CONFIRM FLIGHT: ")
    if c_selection=="r1a" and row1a==0:
        r1a="*"
        row1a=1
        print("YOUR BOOKING HAS BEEN CANCELLED")
        yes_no()

    elif c_selection=="r1a" and row1a==1:
        print("YOUR BOOKING WAS NOT IN THIS SEAT")
        yes_no()

    elif c_selection=="r1b" and row1b==0:
        r1b="*"
        row1b=1
        print("YOUR BOOKING HAS BEEN CANCELLED")
        yes_no()

    elif c_selection=="r1b" and row1b==1:
        print("YOUR BOOKING WAS NOT IN THIS SEAT")
        yes_no()

    elif c_selection=="r1c" and row1c==0:
        r1c="*"
        row1c=1
        print("YOUR BOOKING HAS BEEN CANCELLED")
        yes_no()
        
    elif c_selection=="r1c" and row1c==1:
        print("YOUR BOOKING WAS NOT IN THIS SEAT")
        yes_no()
        
    elif c_selection=="r2a" and row2a==0:
        r2a="*"
        row2a=1
        print("YOUR BOOKING HAS BEEN CANCELLED")
        yes_no()

    elif c_selection=="r2a" and row2a==1:
        print("YOUR BOOKING WAS NOT IN THIS SEAT")
        yes_no()
        
    elif c_selection=="r2b" and row2b==0:
        r2b="*"
        row2b=1
        print("YOUR BOOKING HAS BEEN CANCELLED")
        yes_no()
        
    elif c_selection=="r2b" and row2b==1:
        print("YOUR BOOKING WAS NOT IN THIS SEAT")
        yes_no()
        
    elif c_selection=="r2c" and row2c==0:
        r2c="*"
        row2c=1
        print("YOUR BOOKING HAS BEEN CANCELLED")
        yes_no()

    elif c_selection=="r2c" and row2c==1:
        print("YOUR BOOKING WAS NOT IN THIS SEAT")
        yes_no()
        
    elif c_selection=="r3a" and row3a==0:
        r3a="*"
        row3a=1
        print("YOUR BOOKING HAS BEEN CANCELLED")
        yes_no()

    elif c_selection=="r3a" and row3a==1:
        print("YOUR BOOKING WAS NOT IN THIS SEAT")
        yes_no()
        
    elif c_selection=="r3b" and row3b==0:
        r3b="*"
        row3b=1
        print("YOUR BOOKING HAS BEEN CANCELLED")
        yes_no()

    elif c_selection=="r3b" and row3b==1:
        print("YOUR BOOKING WAS NOT IN THIS SEAT")
        yes_no()

    elif c_selection=="r3c" and row3c==0:
        r3c="*"
        row3c=1
        print("YOUR BOOKING HAS BEEN CANCELLED")
        yes_no()

    elif c_selection=="r3c" and row3c==1:
        print("YOUR BOOKING WAS NOT IN THIS SEAT")
        yes_no()

    else:
         print("INVALID")
         yes_no()



        
        

#TO PROVIDE MAIN USER INTERFACE
        
def user_fun():

    global row1a
    global row1b
    global row1c
    global row2a
    global row2b
    global row2c
    global row3a
    global row3b
    global row3c
    global r1a
    global r1b
    global r1c
    global r2a
    global r2b
    global r2c
    global r3a
    global r3b
    global r3c
    row1a=1
    r1a="*"
    row1b=1
    r1b="*"
    row1c=1
    r1c="*"
    row2a=1
    r2a="*"
    row2b=1
    r2b="*"
    row2c=1
    r2c="*"
    row3a=1
    r3a="*"
    row3b=1
    r3b="*"
    row3c=1
    r3c="*"



    print("1. BOOK A TICKET")
    print("2. CANCEL A BOOKING")
    print("3. SHOW A FLIGHT")
    user_inp=input("ENTER THE CORRESPONDING NUMBER:")
    if user_inp=="1":
        book_ticket()
        
    elif user_inp=="2":
        cancel_book()

    elif user_inp=="3":
        print(         "A    B    C")
        print("ROW1", (r1a, r1b, r1c))
        print("ROW2", (r2a, r2b, r2c))   
        print("ROW3", (r2a, r3b, r3c))
        yes_no()

    else:
        print("INVALID")
        yes_no()


#FOR ADMIN FUNCTION, TO CHANGE LAYOUT OF SEATS
def change_layout():

    global row1a
    global row1b
    global row1c
    global row2a
    global row2b
    global row2c
    global row3a
    global row3b
    global row3c
    global r1a
    global r1b
    global r1c
    global r2a
    global r2b
    global r2c
    global r3a
    global r3b
    global r3c
    row1a=1
    r1a="*"
    row1b=1
    r1b="*"
    row1c=1
    r1c="*"
    row2a=1
    r2a="*"
    row2b=1
    r2b="*"
    row2c=1
    r2c="*"
    row3a=1
    r3a="*"
    row3b=1
    r3b="*"
    row3c=1
    r3c="*"



    layout=input("PLEASE SELECT SEAT:")
    if layout== "r1a":
        change=input("PRESS * TO MAKE SEAT AVIALABLE OR PRESS x TO MAKE THE SEAT NOT AVIALABLE:")
        r1a=change
        print("CHANGE SUCESSFUL")
        yes_no()

    elif layout== "r1b":
        change=input("PRESS * TO MAKE SEAT AVIALABLE OR PRESS x TO MAKE THE SEAT NOT AVIALABLE:")
        r1b=change
        print("CHANGE SUCESSFUL")
        yes_no()

    elif layout== "r1c":
        change=input("PRESS * TO MAKE SEAT AVIALABLE OR PRESS x TO MAKE THE SEAT NOT AVIALABLE:")
        r1c=change
        print("CHANGE SUCESSFUL")
        yes_no()

    elif layout== "r2a":
        change=input("PRESS * TO MAKE SEAT AVIALABLE OR PRESS x TO MAKE THE SEAT NOT AVIALABLE:")
        r2a=change
        print("CHANGE SUCESSFUL")
        yes_no()

    elif layout== "r2b":
        change=input("PRESS * TO MAKE SEAT AVIALABLE OR PRESS x TO MAKE THE SEAT NOT AVIALABLE:")
        r2b=change
        print("CHANGE SUCESSFUL")
        yes_no()

    elif layout== "r2c":
        change=input("PRESS * TO MAKE SEAT AVIALABLE OR PRESS x TO MAKE THE SEAT NOT AVIALABLE:")
        r3b=change
        print("CHANGE SUCESSFUL")
        yes_no()

    elif layout== "r3a":
        change=input("PRESS * TO MAKE SEAT AVIALABLE OR PRESS x TO MAKE THE SEAT NOT AVIALABLE:")
        r1c=change
        print("CHANGE SUCESSFUL")
        yes_no()

    elif layout== "r3b":
        change=input("PRESS * TO MAKE SEAT AVIALABLE OR PRESS x TO MAKE THE SEAT NOT AVIALABLE:")
        r3b=change
        print("CHANGE SUCESSFUL")
        yes_no()

    elif layout== "r3c":
        change=input("PRESS * TO MAKE SEAT AVIALABLE OR PRESS x TO MAKE THE SEAT NOT AVIALABLE:")
        r3c=change
        print("CHANGE SUCESSFUL")
        yes_no()

    else:
         print("CHANGE UNSUCESSFUL")
         yes_no()



#FOR ADMIN FUNCTION, TO CHANGE ADMIN NAME
def change_name():

    global name
    name="PIA"

    print("1.",name)
    admin_input=input("PLEASE SELECT")
    if admin_input=="1":
        admin_input_=input("NEW NWAME:")
        name = admin_input_
        print("NAME CHANGED")
        yes_no()
    else:
        yes_no()
    
        
        

#ADMIN FUNCTION INTERFACE
def admin_fun():

    print("1. CHANGE LAYOUT")
    print("2. CHANGE NAME")
    admin_inp=input("PLEASE SELECT:")
    if admin_inp=="1":
        change_layout()
        
    elif admin_inp=="2":
        change_name()

    else:
        print("INVALID")
        yes_no()
        
        



#TO CHECK USER PASSWORD AND ID

def user_password():

    global user_id
    global user_password
    user_id="Amir"
    user_password="1234"

    user_login_id=input("PLEASE ENTER ID: ")
    user_login_pas=input("PLEASE ENTER PASSWORD: ")
    if user_login_id==user_id and user_login_pas==user_password:
        user_fun()
    else:
        print("WRONG PASSWORD OR USER ID")
        yes_no()

#TO CHECK ADMIN PASSWORD AND ID      
        
def admin_password():

    global admin_id
    global admin_password
    admin_id="Ali"
    admin_password="1122"

    admin_login_id=input("PLEASE ENTER ID: ")
    admin_login_pas=input("PLEASE ENTER PASSWORD: ")
    if admin_login_id==admin_id and admin_login_pas==admin_password:
        admin_fun()
    else:
        print("WRONG PASSWORD OR ADMIN ID")
        yes_no()


#TO CONTINUE OR END THE FUNCTION
def yes_no():

    more_opp = input("More operations? [Y/N]: ")
    if more_opp == "Y" or more_opp == "y":
        admin_user=input("USER OR ADMIN:")
        if admin_user=="user":
            user_fun()
        elif admin_user=="admin":
            admin_fun()
        else:
            print("invalid")
    elif more_opp == "N" or more_opp == "n":
        exit()
    else:
        print("invalid") 


    
#LOGIN INTERFACE
def login():
    
    print("1. USER")
    print("2. ADMIN")
    user = input("USER OR ADMIN: ")
        
    if user=="1":
        user_password()
            
    elif user=="2":
        admin_password()

    else:
        print("INVALID")
        

login()           
            
        
        
        
        






