#include<iostream>
using namespace std;
class Gun{
public:
    int ammo;
    int damage;
    int scope;

};
class player{
private:
    int health;
    int age;
    int score;
    int alive;
    Gun gun;
    class helmet{
        private:
        int hp;
        int level;
    public:
        void setHp(int hp){
            this-> hp=hp;
        }
        void setLevel(int level){
            this-> level=level;
        }
        int getHp(){
            return hp;
        }
        int getLevel(){
            return level;
        }

        
    };
    helmet Helmet;
public:
    void setHealth(int health){
        this->health = health;
    }
    void setAge(int age){
        this->age=age;
    }
    void setScore(int score){
        this->score=score;
    }
    void setAlive(int alive){
        this->alive=alive;
    }
    void setGun(Gun gun){
        this->gun=gun;
    }
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getAlive(){
        return alive;
    }
    int getScore(){
        return score; 
    }
    Gun getGun(){
        return gun; 
    }
    void setHelmet(int level){
        helmet *Helmet=new helmet;
        Helmet->setLevel(level);
        if(Helmet->getLevel()==1) Helmet->setHp(30);
        else if(Helmet->getLevel()==2) Helmet->setHp(60);
        else Helmet->setHp(90);
        this->Helmet=*Helmet;
    }
    void gethelment(){
        cout<<Helmet.getHp()<<endl;
        cout<<Helmet.getLevel()<<endl; 
    }

};
int addScore(player a,player b){
    return a.getScore()+b.getScore(); 
}

player getMaxScorePlayer(player a,player b){
    if(a.getScore()>b.getScore()) return a;
    else return b;
}
int main(){
    Gun akm;
    akm.ammo=30;
    akm.damage=20;
    akm.scope=2;


    player harsh;       // stack allocation
    harsh.setAge(25);
    harsh.setAlive(1);
    harsh .setHealth(100);
    harsh.setScore(100);
    harsh.setGun(akm); 
    harsh.setHelmet(2);
    harsh.setHelmet(2); 

    Gun awm;
    awm.ammo=10;
    awm.damage=100;
    awm.scope=8;   

    player raghav;
    raghav.setAge(25); // stack allocation
    raghav.setAlive(1);
    raghav .setHealth(100);
    raghav.setScore(589);
    raghav.setGun(awm);
    raghav.setHelmet(3);

    player *urvi =new player; // run time ,Dynamic allocation
    player Urvi =*urvi; // ye bhi run time memory allocation lar raha hai
    // confuse nahi hona hai

    Gun gun123 =harsh.getGun();
    cout<<gun123.ammo<<" "<<gun123.damage<<" "<<gun123.scope ;
    cout<<endl;
    raghav.gethelment();
    cout<<endl;
    harsh.gethelment(); 
    player players[3]={harsh,raghav,*urvi};
    cout<<players[0].getAge();






    // Urvi.setAge(25); // run time
    // Urvi.setAlive(1);
    // Urvi .setHealth(100);
    // Urvi.setScore(589);

    // urvi->setAge(25); 

    // cout<<endl;
    // cout<<addScore(harsh,harsh);
    // cout<<endl;
    // player sanket= getMaxScorePlayer(harsh,raghav);
    // cout<<sanket.getScore();




} 