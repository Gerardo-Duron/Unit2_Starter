//Dr_T Unit 2 COSC-1437 Starter 
/* Task -
// NAME: Gerardo Duron 
Top level solution folder: C_STL_Library_YourLastName

create a single main.cpp that contains code samples and implementations of each of the following topics */

#include <iostream>
#include <vector>
#include <algorithm> 
#include <iterator>
#include <string>
#include <stack>
#include <set>
#include <utility>
#include <map>
#include <cassert>
using namespace std;

typedef map<string, int> MapT;
typedef MapT::const_iterator MapIterT;

//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector1
{
  private:  
      vector<int> vec; 
  public: 
      MyClassVector1(vector<int> v) //parameterized constructor
      { 
        vec = v;
      } 
      void print() 
      { 
          /// print the value of vector 
          for (int i = 0; i < vec.size(); i++) 
          {
              cout << vec[i] << " "; 
          }    
      } 
};
class MyClassVector2
{
 private:  
      vector<int> vec1; 
  public: 
      MyClassVector2(vector<int> v) //parameterized constructor
      { 
        vec1 = v;
      } 
      void print() 
      { 
          /// print the value of vector 
          for (int i = 0; i < vec1.size(); i++) 
          {
              cout << vec1[i] << " "; 
          }    
      }  
};
class MyClassVector3
{
  private:  
      vector<int> vector; 
  public: 
      MyClassVector3(::vector <int> v)//parameterized constructor
      { 
        vector = v;
      } ;
      void print() 
      { 
          /// print the value of vector 
          for (int i = 0; i < vector.size(); i++) 
          {
              cout << vector[i] << " "; 
          }    
      }  
};

int main( int argc, char* argv[]) 
{
    /****Section_Name***Vectors*/ 
    //Write the base code for: 5. std::vector example
    vector<double> vd; //vd elments are floating point numbers
    vector<int> vi; //vi elements are integer numbers 
    vector<string> vs; //vs elements are string objects 
  
    //Expand this code to:

    //add 3 elements to the vd vector
    vd.push_back(1);
    vd.push_back(2);
    vd.push_back(3);

    //add 3 elements to the vi vector
    vi.push_back(1);
    vi.push_back(2);
    vi.push_back(3);

   // add 3 elements to the vs vector
    vs.push_back("1");
    vs.push_back("2");
    vs.push_back("3");

   // display the 3 elements in the vd vector
   cout << "\nValues in vd: \n"; 
   for(double vals : vd)
   {
     cout << vals << endl; 
   }

    //display the 3 elements in the vi vector
    cout << "\nValues in vi: \n";
    for(int vals : vi)
    {
      cout << vals << endl;
    }

   // display the 3 elements in the vs vector
   cout << "\nValues in vs: \n";
   for(string vals : vs)
   {
     cout << vals << endl;
   }

    /****Section_Name***Vector_as_Class_Member*/ 
    //Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/
    //Continue with MyClassVector2 and MyClassVector3
   cout << "\n\nVector_as_Class_Member" << endl; 
    vector<int> vec; 
        for (int i = 1; i <= 5; i++) 
            vec.push_back(i); 
        MyClassVector1 obj(vec); 
        obj.print(); 

    cout << "\n\nVector_as_Class_Member" << endl; 
    vector<int> vec1; 
        for (int i = 1; i <= 5; i++) 
            vec1.push_back(i); 
        MyClassVector2 a(vec1); 
        a.print(); 

    cout << "\n\nVector_as_Class_Member" << endl; 
    vector<int> vector; 
        for (int i = 1; i <= 5; i++) 
            vector.push_back(i); 
        MyClassVector3 b(vector); 
        b.print(); 
      

    /****Section_Name***STL_Iterators*/ 
    //vector<int>
    ::vector <int> vint (10);
    vint[0] = 1;
    vint[1] = 2;
    vint[2] = 3;
    vint[3] = 4;
    vint[4] = 5;
    vint[5] = 6;
    vint[6] = 7;
    vint[7] = 8;
    vint[8] = 9;
    vint[9] = 10;
    
    cout<< "\n\nSTL_ITERATORS: ";
    ::vector<int>::iterator it;
    for (it = vint.begin(); it !=vint.end(); ++it)
    {
      cout << " "<< *it;
    }
    
    /****Section_Name*** Stack*/
    stack<int> st;
    st.push( 100 ); // set number on the stack
    assert ( st.size() == 1 ); // verifing number
    assert( st.top() == 100 ); // verifing top value

    st.top() = 456; // setting new value
    assert( st.top() == 456 ); 

    st.pop();
    assert( st.empty() == true );

    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Set*/
    //Write the code as presented in: 3. std::set
    set< int > iset;
    cout << "\n\nstd:: Set:";
    iset.insert( 11 );  // settign values
    iset.insert( -11 );
    iset.insert( 55 );
    iset.insert( 22 );
    iset.insert( 22 );
    if ( iset.find( 55 ) !=iset.end() ) 
        iset.insert( 55 );
    {
      assert( iset.size() == 4 ); // rechecking for size
      set<int>::iterator it;
      for ( it= iset.begin(); it != iset.end(); it++)
      {
        cout << " " << *it;
      }
    }
    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Pair_Structure*/
    //Write the code as presented in: 4. std::pair structure
    pair< string, string > strstr;
    cout << "\n\nPair_Structure: "; // printng the name of functions
    strstr.first = "HELLO"; // printing the first string
    strstr.second = "WORLD"; // printing the second string

    pair< int, string > intstr;
    intstr.first = 1;
    intstr.second = "one";

    pair< string, int > strint( "two", 2 ); // pairing first and second strings
    assert( strint.first == "two" );
    assert( strint.second == 2 );

    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Map_Insert*/
    //Write the code as presented in: 14. std::map::insert
    MapT amap;
    cout << "\n\nMap_insert:" ; 
    pair< MapIterT, bool> result = 
      amap.insert( make_pair( "Fred", 45 ) );

    assert( result.second ==  true );
    assert( result.first->second == 45 );

    result = amap.insert( make_pair( "Fred", 54 ) );
    assert( result.second == false );
    assert( result.first->second == 45 );
    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Map_Summary*/
    //Write the code as presented in: 16. Map summary
    map< string, string > phone_book;
    cout << "\n\nMap_Summary:\n";
    phone_book[ "411" ] = "Directory";
    phone_book[ "911" ] = "Emergency";
    phone_book[ "508-678-2811" ] = "BCC";
    if ( phone_book.find( "411" ) != phone_book.end() )
    {
      phone_book.insert(
        make_pair(
          string( "411" ),
          string( "Directory" ))
      );
    }
    assert( phone_book.size() == 3 ); //setting the total values store in phone_book
    map< string, string >::const_iterator it2;
    for ( it2 = phone_book.begin(); it2 != phone_book.end(); ++it2 )
    {
      cout  
           << " " << it2->first // print first element in directory 
           << " " << it2->second // print second element in directory
           << endl;
    }
    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Sort_Algorithm*/
    //Write the code as presented in: 23. sort example
    int arr[ 100 ];
    sort( arr, arr + 100 );
    ::vector<int> vi2;
    sort( vi2.begin(), vi2.end() );

    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Predicate_Algorithm*/
    //Write the code as presented in: 25. count_if and predicate function
    bool less_than_7( int value );
    {
       return false < 7;
    }

    ::vector< int > v1;
    int count_less = std::count_if( v1.begin(), v1.end(), less_than_7 );
    //Write comments that help one better understand what the code is doing. 

      return 0; 
 };