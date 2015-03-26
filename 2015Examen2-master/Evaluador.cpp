#include "Evaluador.h"

string getPrimerElemento(queue<string> mi_cola);

bool compareSets(set<string>s1, set<string>s2)
{
    if(s1.size()!=s2.size())
        return false;
    set<string>::iterator j =s2.begin();
    for(set<string>::iterator i=s1.begin();i!=s1.end();i++)
    {
        if(*i!=*j)
            return false;
        j++;
    }
    return true;
}

void evaluar()
{
    int nota = 0;

    escribir("archivo_evaluador",new Planeta("Irichetim",42943234,5300.5,'a'),2);
    escribir("archivo_evaluador",new Planeta("Manguz",98431543,30165.74,'d'),0);
    escribir("archivo_evaluador",new Planeta("Diayuri",104326764,123541.9,'c'),1);

    cout<<"Ejercicio escribir() y leer():\t\t";
    bool correcto = true;

    if(  (leer("archivo_evaluador",0)->nombre == "Manguz"
       && leer("archivo_evaluador",1)->nombre == "Diayuri"
       && leer("archivo_evaluador",2)->nombre == "Irichetim"
       && leer("archivo_evaluador",0)->habitantes == 98431543
       && leer("archivo_evaluador",1)->habitantes == 104326764
       && leer("archivo_evaluador",2)->habitantes == 42943234
       && leer("archivo_evaluador",0)->diametro == 30165.74
       && leer("archivo_evaluador",1)->diametro == 123541.9
       && leer("archivo_evaluador",2)->diametro == 5300.5
       && leer("archivo_evaluador",0)->categoria == 'd'
       && leer("archivo_evaluador",1)->categoria == 'c'
       && leer("archivo_evaluador",2)->categoria == 'a'
       )==false)
    {
        correcto=false;
    }

    escribir("archivo_evaluador",new Planeta("Selamari",54326,30165.74,'m'),0);
    escribir("archivo_evaluador",new Planeta("Lavulavu",98431543,30565.74,'t'),1);

    if(  (leer("archivo_evaluador",0)->nombre == "Selamari"
       && leer("archivo_evaluador",1)->nombre == "Lavulavu"
       && leer("archivo_evaluador",0)->habitantes == 54326
       && leer("archivo_evaluador",1)->habitantes == 98431543
       && leer("archivo_evaluador",0)->diametro == 30165.74
       && leer("archivo_evaluador",1)->diametro == 30565.74
       && leer("archivo_evaluador",0)->categoria == 'm'
       && leer("archivo_evaluador",1)->categoria == 't'
       )==false)
    {
        correcto=false;
    }

    if(correcto)
    {
        nota+=5;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    stack<string>s1;
    s1.push("a");
    s1.push("b");
    s1.push("c");
    s1.push("d");

    stack<string>s2;
    s2.push("q");
    s2.push("w");
    s2.push("e");
    s2.push("r");
    s2.push("t");

    stack<string>s3;
    s3.push("f");
    s3.push("d");
    s3.push("s");

    cout<<"Ejercicio getFondo():\t\t\t";
    if(getFondo(s1)=="a"
       && getFondo(s2)=="q"
       && getFondo(s3)=="f"
       )
    {
        nota+=1;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    queue<char>q1;
    q1.push('a');
    q1.push('b');
    q1.push('c');
    q1.push('d');

    queue<char>q2;
    q2.push('q');
    q2.push('w');
    q2.push('e');
    q2.push('r');
    q2.push('t');

    queue<char>q3;
    q3.push('f');
    q3.push('d');
    q3.push('s');

    cout<<"Ejercicio getUltimo():\t\t\t";
    if(getUltimo(q1)=='d'
       && getUltimo(q2)=='t'
       && getUltimo(q3)=='s'
       )
    {
        nota+=1;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    list<int>l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);

    list<int>l2;
    l2.push_back(10);
    l2.push_back(20);
    l2.push_back(30);

    cout<<"Ejercicio convertirAVector():\t\t";

    if(convertirAVector(l1).size()!=0
       &&convertirAVector(l1)[0]==1
       && convertirAVector(l1)[1]==2
       && convertirAVector(l1)[2]==3
       && convertirAVector(l1)[3]==4
       && convertirAVector(l1).size()==4
       && convertirAVector(l2)[0]==10
       && convertirAVector(l2)[1]==20
       && convertirAVector(l2)[2]==30
       && convertirAVector(l2).size()==3
       )
    {
        nota+=2;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio getTabla():\t\t\t";
    if(getTabla(5)[1]==5
       && getTabla(5)[2]==10
       && getTabla(5)[3]==15
       && getTabla(5)[4]==20
       && getTabla(5)[5]==25
       && getTabla(5)[6]==30
       && getTabla(5)[7]==35
       && getTabla(5)[8]==40
       && getTabla(5)[9]==45
       && getTabla(5)[10]==50

       && getTabla(2)[1]==2
       && getTabla(2)[2]==4
       && getTabla(2)[3]==6
       && getTabla(2)[4]==8
       && getTabla(2)[5]==10
       && getTabla(2)[6]==12
       && getTabla(2)[7]==14
       && getTabla(2)[8]==16
       && getTabla(2)[9]==18
       && getTabla(2)[10]==20

       && getTabla(3)[1]==3
       && getTabla(3)[2]==6
       && getTabla(3)[3]==9
       && getTabla(3)[4]==12
       && getTabla(3)[5]==15
       )
    {
        nota+=2;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    NodoBinario* n1 = new NodoBinario("1");
    NodoBinario* n2 = new NodoBinario("2");
    NodoBinario* n3 = new NodoBinario("3");
    NodoBinario* n4 = new NodoBinario("4");
    NodoBinario* n5 = new NodoBinario("5");
    NodoBinario* n6 = new NodoBinario("6");
    NodoBinario* n7 = new NodoBinario("7");

    n1->hijo_izq = n2;
    n1->hijo_der = n3;

    n2->hijo_izq = n4;
    n2->hijo_der = n5;

    n3->hijo_izq = n6;

    n5->hijo_der = n7;

    set<string> set1 = getValores(n1);

    set<string> set1t;
    set1t.insert("1");
    set1t.insert("2");
    set1t.insert("3");
    set1t.insert("4");
    set1t.insert("5");
    set1t.insert("6");
    set1t.insert("7");

    cout<<"Ejercicio getValores():\t\t\t";

    if(compareSets(set1,set1t))
    {
        nota+=3;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    buscarYReemplazar(n1,"3","q");
    buscarYReemplazar(n3,"6","w");
    buscarYReemplazar(n1,"7","e");
    buscarYReemplazar(n1,"1","r");

    cout<<"Ejercicio buscarYReemplazar():\t\t";
    if(n1->valor == "r"
       && n2->valor == "2"
       && n3->valor == "q"
       && n4->valor == "4"
       && n5->valor == "5"
       && n6->valor == "w"
       && n7->valor == "e"
       )
    {
        nota+=3;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<endl<<"Nota: "<<nota<<"/15"<<endl;
}
