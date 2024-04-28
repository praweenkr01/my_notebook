class Creditcard:
    def __init__(self,card_no,balance,pin):
        self.card_no=card_no
        self.balance=balance
        self.__securityPin=pin
    
    def check_pin(self,pin):
        if self.__securityPin==pin:
            return True
        return False
    
    def update_pin(self,oldpin,newpin):
        if self.__securityPin!=oldpin:
            raise Exception("Incorrect Old pin")
        else:
            self.__securityPin=newpin
    

c1=Creditcard(2345,4000,9753)
c2=Creditcard(2346,7000,1357)

cards={c1.card_no:c1,c2.card_no:c2}

class Customber:
    def __init__(self,cards):
        self.cards=cards
    
    def purchase_items(self,price,card_no):
        
        if card_no not in self.cards:
            raise Exception("Wrong Card")
        else:
            print("Enter the Security Pin: ")
            pin=int(input())

            if self.cards[card_no].check_pin(pin):
                if self.cards[card_no].balance<price:
                    raise Exception("Insufficient Balance")
                else:
                    self.cards[card_no].balance-=price
                    print("Thanks,Visit Again")
            else:
                raise Exception("Invaid Pin")

c=Customber(cards)

while True:

    price=-1
    while True:
        print("Enter the Price: ",end='')
        price=int(input())
        if(price>=0):
            break
        else:
            print("Invalid Price")

    print("Enter Card No")
    card_no=int(input())
    try:
        c.purchase_items(price,card_no)

    except Exception as e:
        print(str(e))
