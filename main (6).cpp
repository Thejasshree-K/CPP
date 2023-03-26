///////////////////////////////////// CODE INDEX STARTS ///////////////////////////////////////
/*
PATIENT DATA STARTS - 
PATIENT DATA ENDS - 

DOCTOR DATA STARTS -
DOCTOR DATA ENDS -

ADMIN DATA STARTS - 
    CHECK CHARECTOR (REG) BY ADMIN STARTS - 
    CHECK CHARECTOR (REG) BY ADMIN ENDS - 
ADMIN DATA ENDS -

SELECT CHARECTOR (REG) STARTS - 
    CHECK CHARECTOR (REG) STARTS - 
    CHECK CHARECTOR (REG) ENDS - 
SELECT CHARECTOR (REG) ENDS - 

HOME PAGE STARTS - 
HOME PAGE ENDS - 
*/
///////////////////////////////////// CODE INDEX ENDS ////////////////////////////////////////


#include <iostream>
#include<string.h>
using namespace std;

///////////////////////////////////// PATIENT DATA STARTS ///////////////////////////////////////    

void patient_data()
{
    int patient_ID;
    
    cout<<"Enter User ID: ";
    cin>>patient_ID;
    cout<<endl;
    
    switch(patient_ID){
        case 123:
            cout<<"Name: S.Sairam"<<endl;
            cout<<"Gender: Male"<<endl;
            cout<<"D.O.B: 5/25/1980"<<endl;
            cout<<"Age: 42"<<endl;
            cout<<"Blood-group: B+ve"<<endl;
            cout<<"Phone number: 9812755889"<<endl;
            cout<<"Doctor: Dr.Thejas Shree"<<endl;
            cout<<"Problem: Stroke"<<endl;
            cout<<"Date: 12/12/2018"<<endl;
            cout<<"Prescription: Thiazide Diuretics 1-0-1"<<endl;
            cout<<"Review date: 22/04/2022"<<endl;
        break;
            
        case 456:
            cout<<"Name: P.Sadhiya"<<endl;
            cout<<"Gender: Female"<<endl;
            cout<<"D.O.B: 5/25/1965"<<endl;
            cout<<"Age: 53"<<endl;
            cout<<"Blood-group: AB+ve"<<endl;
            cout<<"Phone number: 9812755299"<<endl;
            cout<<"Doctor: Dr.Helen"<<endl;
            cout<<"Problem: COVID"<<endl;
            cout<<"Date: 12/01/2022"<<endl;
            cout<<"Prescription: Dolo 650 1-1-1"<<endl;
            cout<<"Review date: 25/01/2022"<<endl;
        break;
        
        case 789:
            cout<<"Name: D.Gugan"<<endl;
            cout<<"Gender: Male"<<endl;
            cout<<"D.O.B: 3/12/1980"<<endl;
            cout<<"Age: 42"<<endl;
            cout<<"Blood-group: B-ve"<<endl;
            cout<<"Phone number: 9812757689"<<endl;
            cout<<"Doctor: Dr.Yogesh"<<endl;
            cout<<"Problem: Cancer"<<endl;
            cout<<"Date: 9/8/2017"<<endl;
            cout<<"Prescription: Azacitidine 1-1-1, Capecitabine 1-1-1"<<endl;
            cout<<"Review date: 12/02/2022"<<endl;
        break;
            
        case 147:
            cout<<"Name: L.Keshav"<<endl;
            cout<<"Gender: Male"<<endl;
            cout<<"D.O.B: 29/2/1989"<<endl;
            cout<<"Age: 35"<<endl;
            cout<<"Blood-group: A-ve"<<endl;
            cout<<"Phone number: 9814455889"<<endl;
            cout<<"Doctor: Dr.Sathyaprasanna"<<endl;
            cout<<"Problem: I-VIRUS"<<endl;
            cout<<"Date: 12/5/2014"<<endl;
            cout<<"Prescription: Profol 1-1-1, Thiopental 1-1-1"<<endl;
            cout<<"In-patient"<<endl;
        break;
        
        case 258:
            cout<<"Name: P.Varun"<<endl;
            cout<<"Gender: Male"<<endl;
            cout<<"D.O.B: 9/8/1996"<<endl;
            cout<<"Age: 25"<<endl;
            cout<<"Blood group: O+ve"<<endl;
            cout<<"Phone number: 9812789889"<<endl;
            cout<<"Doctor: Dr.Helen"<<endl;
            cout<<"Problem: Arthritis"<<endl;
            cout<<"Date: 12/1/2020"<<endl;
            cout<<"Prescription: Humira 1-1-0, Rituxan 0-0-1"<<endl;
            cout<<"Review date: 13/03/2022"<<endl;
        break;
        
        case 369:
            cout<<"Name: S.Aishwarya"<<endl;
            cout<<"Gender: Female"<<endl;
            cout<<"D.O.B: 5/5/1999"<<endl;
            cout<<"Age: 23"<<endl;
            cout<<"Blood-group: AB-ve"<<endl;
            cout<<"Phone number: 9844455889"<<endl;
            cout<<"Doctor: Dr.Thejas Shree"<<endl;
            cout<<"Problem: Alzheimer's"<<endl;
            cout<<"Date: 1/2/2022"<<endl;
            cout<<"Prescription: Onepezil 1-0-0, Rivastigmine 1-1-0"<<endl;
        break;
        
        case 159:
            cout<<"Name: M.Preetha"<<endl;
            cout<<"Gender: Female"<<endl;
            cout<<"D.O.B: 7/4/1960"<<endl;
            cout<<"Age: 71"<<endl;
            cout<<"Blood-group: a+ve"<<endl;
            cout<<"Phone number: 9812755889"<<endl;
            cout<<"Doctor: Dr.Praveenaa"<<endl;
            cout<<"Problem: Heart attack"<<endl;
            cout<<"Date: 12/1/2022"<<endl;
            cout<<"Prescription : Enalapril 1-0-1, Fozinapril 1-0-0"<<endl;
        break;
        
        case 753:
            cout<<"Name: C.Selvi"<<endl;
            cout<<"Gender: Female"<<endl;
            cout<<"D.O.B: 22/2/1988"<<endl;
            cout<<"Age: 44"<<endl;
            cout<<"Blood-group: A+ve"<<endl;
            cout<<"Phone number: 7892755889"<<endl;
            cout<<"Doctor: Dr.Yogesh"<<endl;
            cout<<"Problem: cancer"<<endl;
            cout<<"Date: 18/10/2012"<<endl;
            cout<<"Prescription: Cladridine 1-1-1, 5-Fluorouracil 0-1-1"<<endl;
            cout<<"Review date - 31/01/2022"<<endl;
        break;
        
        case 713:
            cout<<"Name: H.Riya"<<endl;
            cout<<"Gender: Female"<<endl;
            cout<<"D.O.B: 5/12/1992"<<endl;
            cout<<"Age: 29"<<endl;
            cout<<"Blood-group: A+ve"<<endl;
            cout<<"Phone number: 6382755889"<<endl;
            cout<<"Doctor: Dr.Nandhakumar"<<endl;
            cout<<"Problem: Pregnant"<<endl;
            cout<<"Date: 12/8/2021"<<endl;
            cout<<"Prescription: Monistat 1-0-0, Maalox 0-1-1"<<endl;
            cout<<"Review date: 15/03/2022"<<endl;
        break;
        
        default :
            cout<<"User ID Doesn't exist!!\nTry again!!"<<endl<<"_____________________________________"<<endl;
            patient_data();
        break;
    }
}

///////////////////////////////////// PATIENT DATA ENDS ///////////////////////////////////////


///////////////////////////////////// DOCTOR DATA STARTS ///////////////////////////////////////

void doctor_data()
{
    int User_ID;
    string doc_log_time, doc_login_time, doc_logout_time;
    int doc123456_power, doc654321_power, doc789456_power, doc654987_power, doc987654_power, doc123789_power;
    int praveenaa_patient, thejas_patient, yogesh_patient, sathya_patient, nandha_patient, helen_patient;
    
    cout<<"Enter User ID: ";
    cin>>User_ID;
    
    switch(User_ID){
        case 123456:
            cout<<"Welcome Dr.NR Praveenaa";
            Doc123456_power:
            cout<<"\n_____________________________________\n";
            cout<<"For Attandance: Press 1\nFor Doctor Detail: Press 2\nFor Patient Details: Press 3\n";
            cout<<"Your Choice: ";
            cin>>doc123456_power;
            cout<<"_____________________________________\n";
            
            switch(doc123456_power){
                case 1:
                    Doc123456_login:
                        cout<<"ATTANDANCE:\n"<<endl;
                        cout<<"For Log (in/out): ";
                        cin>>doc_log_time;
                        if(doc_log_time=="in"){
                            cout<<"Enter Current Time: ";
                            cin>>doc_login_time;
                            cout<<"Responed has been recorded"<<endl;
                            goto Doc123456_power;
                        }
                        else if(doc_log_time=="out"){
                            cout<<"Enter Current Time: ";
                            cin>>doc_logout_time;
                            cout<<endl;
                            cout<<"You worked from "<<doc_login_time<<" to "<<doc_logout_time<<endl;
                            cout<<"_____________________________________"<<endl;
                            cout<<"Thank you\nHave a Pleasent Day";
                            cout<<endl<<"_____________________________________";
                            break;
                        }
                        else{
                            cout<<"Not in the option!!\ntry again\n_____________________________________\n";
                            goto Doc123456_login;
                        }
                        
                    goto Doc123456_power;    
                break;
                
                case 2:
                    cout<<"Name: Dr.N.R.Praveenaa"<<endl;
                    cout<<"Gender: Female"<<endl;
                    cout<<"D.O.B: 10/29/1991"<<endl;
                    cout<<"Age: 31"<<endl;
                    cout<<"Blood-group: O+ve"<<endl;
                    cout<<"E-mail: praveenaa29@gmail.com"<<endl;
                    cout<<"Phone number: 9812743068"<<endl;
                    cout<<"Specialist: Cardiology"<<endl;
                    
                    goto Doc123456_power;
                break;
                
                case 3:
                cout<<"For Patient 1(M.Preetha): Press 1\n";
                cout<<"Your choice: ";
                cin>>praveenaa_patient;
                cout<<endl;
                
                Praveenaa_patient_details:
                    switch(praveenaa_patient){
                        case 1:
                            cout<<"Name: M.Preetha"<<endl;
                            cout<<"Gender: Female"<<endl;
                            cout<<"D.O.B: 7/4/1960"<<endl;
                            cout<<"Age: 71"<<endl;
                            cout<<"Blood-group: a+ve"<<endl;
                            cout<<"Phone number: 9812755889"<<endl;
                            cout<<"Doctor: Dr.Praveenaa"<<endl;
                            cout<<"Problem: Heart attack"<<endl;
                            cout<<"Date: 12/1/2022"<<endl;
                            cout<<"Prescription : Enalapril 1-0-1, Fozinapril 1-0-0"<<endl;    
                        break;
                        
                        default:
                            cout<<"User ID Doesn't exist!!\nTry again!!"<<endl<<"_____________________________________"<<endl;
                            goto Praveenaa_patient_details;
                        break;
                    }
                    
                    goto Doc123456_power;
                break;
                
                default:
                    cout<<"Not in the option!!\ntry again\n_____________________________________\n";
                    goto Doc123456_power;
                break;
            }
            
            break;
        
        case 654321:
            cout<<"Welcome Dr.K Thejas Shree";
            Doc654321_power:
            cout<<"\n_____________________________________\n";
            cout<<"For Attandance: Press 1\nFor Doctor Detail: Press 2\nFor Patient Details: Press 3\n";
            cout<<"Your Choice: ";
            cin>>doc654321_power;
            cout<<"_____________________________________\n";
            
            switch(doc654321_power){
                case 1:
                    Doc654321_login:
                        cout<<"ATTANDANCE:\n"<<endl;
                        cout<<"For Log (in/out): ";
                        cin>>doc_log_time;
                        if(doc_log_time=="in"){
                            cout<<"Enter Current Time: ";
                            cin>>doc_login_time;
                            cout<<"Responed has been recorded"<<endl;
                            goto Doc654321_power;
                        }
                        else if(doc_log_time=="out"){
                            cout<<"Enter Current Time: ";
                            cin>>doc_logout_time;
                            cout<<endl;
                            cout<<"You worked from "<<doc_login_time<<" to "<<doc_logout_time<<endl;
                            cout<<"_____________________________________"<<endl;
                            cout<<"Thank you\nHave a Pleasent Day";
                            cout<<endl<<"_____________________________________";
                            break;
                        }
                        else{
                            cout<<"Not in the option!!\ntry again\n_____________________________________\n";
                            goto Doc654321_login;
                        }
                        
                    goto Doc654321_power;    
                break;
                
                case 2:
                    cout<<"Name: Dr.K.Thejas shree"<<endl;
                    cout<<"Gender: Female"<<endl;
                    cout<<"D.O.B: 10/9/1990"<<endl;
                    cout<<"Age: 32"<<endl;
                    cout<<"Blood-group: O+ve"<<endl;
                    cout<<"E-mail: thejas109@gmail.com"<<endl;
                    cout<<"Phone number: 9812743069"<<endl;
                    cout<<"Specialist: Neurosurgeon"<<endl;  
                    
                    goto Doc654321_power;
                break;
                
                case 3:
                cout<<"For Patient 1(S.Sairam): Press 1\nFor Patient 2(S.Aishwarya): Press 2\n";
                cout<<"Your choice: ";
                cin>>thejas_patient;
                cout<<endl;
                
                Thejas_patient_details:
                    switch(thejas_patient){
                        case 1:
                            cout<<"Name: S.Sairam"<<endl;
                            cout<<"Gender: Male"<<endl;
                            cout<<"D.O.B: 5/25/1980"<<endl;
                            cout<<"Age: 42"<<endl;
                            cout<<"Blood-group: B+ve"<<endl;
                            cout<<"Phone number: 9812755889"<<endl;
                            cout<<"Doctor: Dr.Thejas Shree"<<endl;
                            cout<<"Problem: Stroke"<<endl;
                            cout<<"Date: 12/12/2018"<<endl;
                            cout<<"Prescription: Thiazide Diuretics 1-0-1"<<endl;
                            cout<<"Review date: 22/04/2022"<<endl;    
                        break;
                        
                        case 2:
                            cout<<"Name: S.Aishwarya"<<endl;
                            cout<<"Gender: Female"<<endl;
                            cout<<"D.O.B: 5/5/1999"<<endl;
                            cout<<"Age: 23"<<endl;
                            cout<<"Blood-group: AB-ve"<<endl;
                            cout<<"Phone number: 9844455889"<<endl;
                            cout<<"Doctor: Dr.Thejas Shree"<<endl;
                            cout<<"Problem: Alzheimer's"<<endl;
                            cout<<"Date: 1/2/2022"<<endl;
                            cout<<"Prescription: Onepezil 1-0-0, Rivastigmine 1-1-0"<<endl;    
                        break;
                        
                        default:
                            cout<<"User ID Doesn't exist!!\nTry again!!"<<endl<<"_____________________________________"<<endl;
                            goto Thejas_patient_details;
                        break;
                    }
                    
                    goto Doc654321_power;
                break;
                
                default:
                    cout<<"Not in the option!!\ntry again\n_____________________________________\n";
                    goto Doc654321_power;
                break;
            }
            
        break;
        
        case 789456:
            cout<<"Welcome Dr.SJ Yogesh";
            Doc789456_power:
            cout<<"\n_____________________________________\n";
            cout<<"For Attandance: Press 1\nFor Doctor Detail: Press 2\nFor Patient Details: Press 3\n";
            cout<<"Your Choice: ";
            cin>>doc789456_power;
            cout<<"_____________________________________\n";
            
            switch(doc789456_power){
                case 1:
                    Doc789456_login:
                        cout<<"ATTANDANCE:\n"<<endl;
                        cout<<"For Log (in/out): ";
                        cin>>doc_log_time;
                        if(doc_log_time=="in"){
                            cout<<"Enter Current Time: ";
                            cin>>doc_login_time;
                            cout<<"Responed has been recorded"<<endl;
                            goto Doc789456_power;
                        }
                        else if(doc_log_time=="out"){
                            cout<<"Enter Current Time: ";
                            cin>>doc_logout_time;
                            cout<<endl;
                            cout<<"You worked from "<<doc_login_time<<" to "<<doc_logout_time<<endl;
                            cout<<"_____________________________________"<<endl;
                            cout<<"Thank you\nHave a Pleasent Day";
                            cout<<endl<<"_____________________________________";
                            break;
                        }
                        else{
                            cout<<"Not in the option!!\ntry again\n_____________________________________\n";
                            goto Doc789456_login;
                        }
                    
                    goto Doc789456_power;    
                break;
                
                case 2:
                    cout<<"Name: Dr.SJ.Yogesh"<<endl;
                    cout<<"Gender: Male"<<endl;
                    cout<<"D.O.B: 12/23/1989"<<endl;
                    cout<<"Age: 33"<<endl;
                    cout<<"Blood-group: O+ve"<<endl;
                    cout<<"E-mail: sjyogesh23@gmail.com"<<endl;
                    cout<<"Phone number: 8925263943"<<endl;
                    cout<<"Specialist: Oncologist"<<endl;
                    
                    goto Doc789456_power;
                break;
                
                case 3:
                cout<<"For Patient 1(D.Gugan): Press 1\nFor Patient 2(C.Selvi): Press 2\n";
                cout<<"Your choice: ";
                cin>>yogesh_patient;
                cout<<endl;
                
                Yogesh_patient_details:
                    switch(yogesh_patient){
                        case 1:
                            cout<<"Name: D.Gugan"<<endl;
                            cout<<"Gender: Male"<<endl;
                            cout<<"D.O.B: 3/12/1980"<<endl;
                            cout<<"Age: 42"<<endl;
                            cout<<"Blood-group: B-ve"<<endl;
                            cout<<"Phone number: 9812757689"<<endl;
                            cout<<"Doctor: Dr.Yogesh"<<endl;
                            cout<<"Problem: Cancer"<<endl;
                            cout<<"Date: 9/8/2017"<<endl;
                            cout<<"Prescription: Azacitidine 1-1-1, Capecitabine 1-1-1"<<endl;
                            cout<<"Review date: 12/02/2022"<<endl;    
                        break;
                        
                        case 2:
                            cout<<"Name: C.Selvi"<<endl;
                            cout<<"Gender: Female"<<endl;
                            cout<<"D.O.B: 22/2/1988"<<endl;
                            cout<<"Age: 44"<<endl;
                            cout<<"Blood-group: A+ve"<<endl;
                            cout<<"Phone number: 7892755889"<<endl;
                            cout<<"Doctor: Dr.Yogesh"<<endl;
                            cout<<"Problem: cancer"<<endl;
                            cout<<"Date: 18/10/2012"<<endl;
                            cout<<"Prescription: Cladridine 1-1-1, 5-Fluorouracil 0-1-1"<<endl;
                            cout<<"Review date - 31/01/2022"<<endl;    
                        break;
                        
                        default:
                            cout<<"User ID Doesn't exist!!\nTry again!!"<<endl<<"_____________________________________"<<endl;
                            goto Yogesh_patient_details;
                        break;
                    }
                    
                    goto Doc789456_power;
                break;
                
                default:
                    cout<<"Not in the option!!\ntry again\n_____________________________________\n";
                    goto Doc789456_power;
                break;
            }
        break;
        
        case 654987:
            cout<<"Welcome Dr.S Sathya prasanna";
            Doc654987_power:
            cout<<"\n_____________________________________\n";
            cout<<"For Attandance: Press 1\nFor Doctor Detail: Press 2\nFor Patient Details: Press 3\n";
            cout<<"Your Choice: ";
            cin>>doc654987_power;
            cout<<"_____________________________________\n";
            
            switch(doc654987_power){
                case 1:
                    Doc654987_login:
                        cout<<"ATTANDANCE:\n"<<endl;
                        cout<<"For Log (in/out): ";
                        cin>>doc_log_time;
                        if(doc_log_time=="in"){
                            cout<<"Enter Current Time: ";
                            cin>>doc_login_time;
                            cout<<"Responed has been recorded"<<endl;
                            goto Doc654987_power;
                        }
                        else if(doc_log_time=="out"){
                            cout<<"Enter Current Time: ";
                            cin>>doc_logout_time;
                            cout<<endl;
                            cout<<"You worked from "<<doc_login_time<<" to "<<doc_logout_time<<endl;
                            cout<<"_____________________________________"<<endl;
                            cout<<"Thank you\nHave a Pleasent Day";
                            cout<<endl<<"_____________________________________";
                            break;
                        }
                        else{
                            cout<<"Not in the option!!\ntry again\n_____________________________________\n";
                            goto Doc654987_login;
                        }
                        
                    goto Doc654987_power;    
                break;
                
                case 2:
                    cout<<"Name: Dr.S.Sathya prasanna"<<endl;
                    cout<<"Gender: Male"<<endl;
                    cout<<"D.O.B: 8/8/1990"<<endl;
                    cout<<"Age: 32"<<endl;
                    cout<<"Blood-group: O+ve"<<endl;
                    cout<<"E-mail: satya88@gmail.com"<<endl;
                    cout<<"Phone number: 9812743022"<<endl;
                    cout<<"Specialist: Virologist"<<endl;  
                    goto Doc654987_power;
                break;
                
                case 3:
                cout<<"For Patient 1(L.Keshav): Press 1\n";
                cout<<"Your choice: ";
                cin>>sathya_patient;
                cout<<endl;
                
                Sathya_patient_details:
                    switch(sathya_patient){
                        case 1:
                            cout<<"Name: L.Keshav"<<endl;
                            cout<<"Gender: Male"<<endl;
                            cout<<"D.O.B: 29/2/1989"<<endl;
                            cout<<"Age: 35"<<endl;
                            cout<<"Blood-group: A-ve"<<endl;
                            cout<<"Phone number: 9814455889"<<endl;
                            cout<<"Doctor: Dr.Sathyaprasanna"<<endl;
                            cout<<"Problem: I-VIRUS"<<endl;
                            cout<<"Date: 12/5/2014"<<endl;
                            cout<<"Prescription: Profol 1-1-1, Thiopental 1-1-1"<<endl;
                            cout<<"In-patient"<<endl;  
                        break;
                        
                        default:
                            cout<<"User ID Doesn't exist!!\nTry again!!"<<endl<<"_____________________________________"<<endl;
                            goto Sathya_patient_details;
                        break;
                    }
                    
                    goto Doc654987_power;
                break;
                
                default:
                    cout<<"Not in the option!!\ntry again\n_____________________________________\n";
                    goto Doc654987_power;
                break;
            }
        break;
            
        case 987654:
            cout<<"Welcome Dr.U Nandhakumar";
            Doc987654_power:
            cout<<"\n_____________________________________\n";
            cout<<"For Attandance: Press 1\nFor Doctor Detail: Press 2\nFor Patient Details: Press 3\n";
            cout<<"Your Choice: ";
            cin>>doc987654_power;
            cout<<"_____________________________________\n";
            
            switch(doc987654_power){
                case 1:
                    Doc987654_login:
                        cout<<"ATTANDANCE:\n"<<endl;
                        cout<<"For Log (in/out): ";
                        cin>>doc_log_time;
                        if(doc_log_time=="in"){
                            cout<<"Enter Current Time: ";
                            cin>>doc_login_time;
                            cout<<"Responed has been recorded"<<endl;
                            goto Doc987654_power;
                        }
                        else if(doc_log_time=="out"){
                            cout<<"Enter Current Time: ";
                            cin>>doc_logout_time;
                            cout<<endl;
                            cout<<"You worked from "<<doc_login_time<<" to "<<doc_logout_time<<endl;
                            cout<<"_____________________________________"<<endl;
                            cout<<"Thank you\nHave a Pleasent Day";
                            cout<<endl<<"_____________________________________";
                            break;
                        }
                        else{
                            cout<<"Not in the option!!\ntry again\n_____________________________________\n";
                            goto Doc987654_login;
                        }
                        
                    goto Doc987654_power;    
                break;
                
                case 2:
                    cout<<"Name: Dr.U.Nandhakumar"<<endl;
                    cout<<"Gender: Male"<<endl;
                    cout<<"D.O.B: 6/23/1990"<<endl;
                    cout<<"Age: 32"<<endl;
                    cout<<"Blood-group: O+ve"<<endl;
                    cout<<"E-mail: nandha23@gmail.com"<<endl;
                    cout<<"Phone number: 9812743055"<<endl;
                    cout<<"Specialist: Gynaecologist"<<endl;    
                
                    goto Doc987654_power;
                break;
                
                case 3:
                cout<<"For Patient 1(H.Riya): Press 1\n";
                cout<<"Your choice: ";
                cout<<endl;
                
                cin>>nandha_patient;
                Nandha_patient_details:
                    switch(nandha_patient){
                        case 1:
                            cout<<"Name: H.Riya"<<endl;
                            cout<<"Gender: Female"<<endl;
                            cout<<"D.O.B: 5/12/1992"<<endl;
                            cout<<"Age: 29"<<endl;
                            cout<<"Blood-group: A+ve"<<endl;
                            cout<<"Phone number: 6382755889"<<endl;
                            cout<<"Doctor: Dr.Nandhakumar"<<endl;
                            cout<<"Problem: Pregnant"<<endl;
                            cout<<"Date: 12/8/2021"<<endl;
                            cout<<"Prescription: Monistat 1-0-0, Maalox 0-1-1"<<endl;
                            cout<<"Review date: 15/03/2022"<<endl;      
                        break;
                        
                        default:
                            cout<<"User ID Doesn't exist!!\nTry again!!"<<endl<<"_____________________________________"<<endl;
                            goto Nandha_patient_details;
                        break;
                    }
                    
                    goto Doc987654_power;
                break;
                
                default:
                    cout<<"Not in the option!!\ntry again\n_____________________________________\n";
                    goto Doc987654_power;
                break;
            }
        break;
            
        case 123789:
            cout<<"Welcome Dr.A Helen Shalini";
            Doc123789_power:
            cout<<"\n_____________________________________\n";
            cout<<"For Attandance: Press 1\nFor Doctor Detail: Press 2\nFor Patient Details: Press 3\n";
            cout<<"Your Choice: ";
            cin>>doc123789_power;
            cout<<"_____________________________________\n";
            
            switch(doc123789_power){
                case 1:
                    Doc123789_login:
                        cout<<"ATTANDANCE:\n"<<endl;
                        cout<<"For Log (in/out): ";
                        cin>>doc_log_time;
                        if(doc_log_time=="in"){
                            cout<<"Enter Current Time: ";
                            cin>>doc_login_time;
                            cout<<"Responed has been recorded"<<endl;
                            goto Doc123789_power;
                        }
                        else if(doc_log_time=="out"){
                            cout<<"Enter Current Time: ";
                            cin>>doc_logout_time;
                            cout<<endl;
                            cout<<"You worked from "<<doc_login_time<<" to "<<doc_logout_time<<endl;
                            cout<<"_____________________________________"<<endl;
                            cout<<"Thank you\nHave a Pleasent Day";
                            cout<<endl<<"_____________________________________";
                            break;
                        }
                        else{
                            cout<<"Not in the option!!\ntry again\n_____________________________________\n";
                            goto Doc123789_login;
                        }
                
                    goto Doc123789_power;        
                break;
                
                case 2:
                    cout<<"Name: Dr.A.Helen Shalini"<<endl;
                    cout<<"Gender: Female"<<endl;
                    cout<<"D.O.B: 5/25/1990"<<endl;
                    cout<<"Age: 32"<<endl;
                    cout<<"Blood-group: O+ve"<<endl;
                    cout<<"E-mail: helen255@gmail.com"<<endl;
                    cout<<"Phone number: 9812743596"<<endl;
                    cout<<"Specialist: General surgeon"<<endl;
                    
                    goto Doc123789_power;
                break;
                
                case 3:
                cout<<"For Patient 1(P.Sadhiya): Press 1\nFor Patient 2(P.Varun): Press 2\n";
                cout<<"Your choice: ";
                cin>>helen_patient;
                cout<<endl;
                
                Helen_patient_details:
                    switch(helen_patient){
                        case 1:
                            cout<<"Name: P.Sadhiya"<<endl;
                            cout<<"Gender: Female"<<endl;
                            cout<<"D.O.B: 5/25/1965"<<endl;
                            cout<<"Age: 53"<<endl;
                            cout<<"Blood-group: AB+ve"<<endl;
                            cout<<"Phone number: 9812755299"<<endl;
                            cout<<"Doctor: Dr.Helen"<<endl;
                            cout<<"Problem: COVID"<<endl;
                            cout<<"Date: 12/01/2022"<<endl;
                            cout<<"Prescription: Dolo 650 1-1-1"<<endl;
                            cout<<"Review date: 25/01/2022"<<endl;    
                        break;
                        
                        case 2:
                            cout<<"Name: P.Varun"<<endl;
                            cout<<"Gender: Male"<<endl;
                            cout<<"D.O.B: 9/8/1996"<<endl;
                            cout<<"Age: 25"<<endl;
                            cout<<"Blood group: O+ve"<<endl;
                            cout<<"Phone number: 9812789889"<<endl;
                            cout<<"Doctor: Dr.Helen"<<endl;
                            cout<<"Problem: Arthritis"<<endl;
                            cout<<"Date: 12/1/2020"<<endl;
                            cout<<"Prescription: Humira 1-1-0, Rituxan 0-0-1"<<endl;
                            cout<<"Review date: 13/03/2022"<<endl;    
                        break;
                        
                        default:
                            cout<<"User ID Doesn't exist!!\nTry again!!"<<endl<<"_____________________________________"<<endl;
                            goto Helen_patient_details;
                        break;
                    }
                    
                    goto Doc123789_power;
                break;
                
                default:
                    cout<<"Not in the option!!\ntry again\n_____________________________________\n";
                    goto Doc123789_power;
                break;
            }
            
        break;
        
        default:
            cout<<"User ID Doesn't exist!!\nTry again!!"<<endl<<"_____________________________________"<<endl;
            doctor_data();
        break;
    }
}

///////////////////////////////////// DOCTOR DATA ENDS ///////////////////////////////////////    


///////////////////////////////////// ADMIN DATA STARTS ///////////////////////////////////////

void administrator_data()
{
    int User_ID, ad_power, patient_ID;
    string ad_log_time, ad_login_time, ad_logout_time;
    string select_charector;
    string ad_name, ad_gender, ad_dob, ad_age, ad_blood, ad_mail, ad_number, ad_time;
    string doc_name, doc_gender, doc_dob, doc_age, doc_blood, doc_mail, doc_number, doc_acad, doc_speacial;
    string pa_name, pa_gender, pa_dob, pa_age, pa_blood, pa_mail, pa_number, pa_height, pa_weight, pa_bp, pa_sugar, pa_doc;
    string ad_confirmation, doc_confirmation, pa_confirmation;
    
    cout<<"Enter User ID: ";
    cin>>User_ID;
    switch(User_ID){
        case 2345:
            cout<<"_____________________________________\n";
            cout<<"Hi M.Reshma!";
            goto Admin2345_power;
        break;
        
        default:
            cout<<"User ID Doesn't exist!!\ntry again!!"<<endl<<"_____________________________________"<<endl;
            administrator_data();
        break;
    }
    
    Admin2345_power:
    cout<<"\n_____________________________________\n";
    cout<<"For Attandance: Press 1\nFor Admin Details: Press 2\nFor Doctor Details: Press 3\nFor Patient Details: Press 4\nFor Charector Registration: Press 5\n";
    cout<<"Your Choice: ";
    cin>>ad_power;
    cout<<"_____________________________________\n";
    
    switch(ad_power){
        case 1:
        Admin_login:
            cout<<"ATTANDANCE:\n"<<endl;
            cout<<"For Log (in/out): ";
            cin>>ad_log_time;
            if(ad_log_time=="in"){
                cout<<"Enter Current Time: ";
                cin>>ad_login_time;
                cout<<"Responed has been recorded"<<endl;
                goto Admin2345_power;
            }
            else if(ad_log_time=="out"){
                cout<<"Enter Current Time: ";
                cin>>ad_logout_time;
                cout<<endl;
                cout<<"You worked from "<<ad_login_time<<" to "<<ad_logout_time<<endl;
                cout<<"_____________________________________"<<endl;
                cout<<"Thank you\nHave a Pleasent Day";
                cout<<endl<<"_____________________________________";
                
                break;
            }
            else{
                cout<<"Not in the option!!\ntry again\n_____________________________________\n";
                goto Admin_login;
            }
        break;
        
        case 2:
            cout<<"ADMIN DETAIL:\n"<<endl;
            cout<<"Name: M.Reshma"<<endl;
            cout<<"Gender: Female"<<endl;
            cout<<"D.O.B: 8/18/1996"<<endl;
            cout<<"Age: 25"<<endl;
            cout<<"Blood-group: O+ve"<<endl;
            cout<<"E-mail: reshma18@gmail.com"<<endl;
            cout<<"Phone number: 9812743065"<<endl;
            cout<<"_____________________________________\n"<<endl;
            goto Admin2345_power;
        break;
        
        case 3:
            cout<<"DOCTOR DETAIL:"<<endl;
            cout<<"Enter Doctor ID: ";
            cin>>User_ID;
            switch(User_ID){
                case 123456:
                    cout<<"Name: Dr.N.R.Praveenaa"<<endl;
                    cout<<"Gender: Female"<<endl;
                    cout<<"D.O.B: 10/29/1991"<<endl;
                    cout<<"Age: 31"<<endl;
                    cout<<"Blood-group: O+ve"<<endl;
                    cout<<"E-mail: praveenaa29@gmail.com"<<endl;
                    cout<<"Phone number: 9812743068"<<endl;
                    cout<<"Specialist: Cardiology"<<endl;
                    break;
                
                case 654321:
                    cout<<"Name: Dr.K.Thejas shree"<<endl;
                    cout<<"Gender: Female"<<endl;
                    cout<<"D.O.B: 10/9/1990"<<endl;
                    cout<<"Age: 32"<<endl;
                    cout<<"Blood-group: O+ve"<<endl;
                    cout<<"E-mail: thejas109@gmail.com"<<endl;
                    cout<<"Phone number: 9812743069"<<endl;
                    cout<<"Specialist: Neurosurgeon"<<endl;
                break;
                
                case 789456:
                    cout<<"Name: Dr.S.J.Yogesh"<<endl;
                    cout<<"Gender: Male"<<endl;
                    cout<<"D.O.B: 12/23/1989"<<endl;
                    cout<<"Age: 33"<<endl;
                    cout<<"Blood-group: O+ve"<<endl;
                    cout<<"E-mail: sjyogesh23@gmail.com"<<endl;
                    cout<<"Phone number: 8925263943"<<endl;
                    cout<<"Specialist: Oncologist"<<endl;
                break;
                
                case 654987:
                    cout<<"Name: Dr.S.Sathya prasanna"<<endl;
                    cout<<"Gender: Male"<<endl;
                    cout<<"D.O.B: 8/8/1990"<<endl;
                    cout<<"Age: 32"<<endl;
                    cout<<"Blood-group: O+ve"<<endl;
                    cout<<"E-mail: satya88@gmail.com"<<endl;
                    cout<<"Phone number: 9812743022"<<endl;
                    cout<<"Specialist: Virologist"<<endl;
                break;
                    
                case 987654:
                    cout<<"Name: Dr.U.Nandhakumar"<<endl;
                    cout<<"Gender: Male"<<endl;
                    cout<<"D.O.B: 6/23/1990"<<endl;
                    cout<<"Age: 32"<<endl;
                    cout<<"Blood-group: O+ve"<<endl;
                    cout<<"E-mail: nandha23@gmail.com"<<endl;
                    cout<<"Phone number: 9812743055"<<endl;
                    cout<<"Specialist: Gynaecologist"<<endl;
                break;
                    
                case 123789:
                    cout<<"Name: Dr.A.Helen Shalini"<<endl;
                    cout<<"Gender: Female"<<endl;
                    cout<<"D.O.B: 5/25/1990"<<endl;
                    cout<<"Age: 32"<<endl;
                    cout<<"Blood-group: O+ve"<<endl;
                    cout<<"E-mail: helen255@gmail.com"<<endl;
                    cout<<"Phone number: 9812743596"<<endl;
                    cout<<"Specialist: General surgeon"<<endl;
                break;
                
                default:
                    cout<<"User ID Doesn't exist!!\nTry again!!"<<endl<<"_____________________________________"<<endl;
                    doctor_data();
                break;
            }
            goto Admin2345_power;
        break;
        
        case 4:
            cout<<"PATIENT DETAIL:"<<endl;
            cout<<"Enter Patient ID: ";
            cin>>patient_ID;
            cout<<endl;
            
            switch(patient_ID){
                case 123:
                    cout<<"Name: S.Sairam"<<endl;
                    cout<<"Gender: Male"<<endl;
                    cout<<"D.O.B: 5/25/1980"<<endl;
                    cout<<"Age: 42"<<endl;
                    cout<<"Blood-group: B+ve"<<endl;
                    cout<<"Phone number: 9812755889"<<endl;
                    cout<<"Doctor: Dr.Thejas Shree"<<endl;
                    cout<<"Problem: Stroke"<<endl;
                    cout<<"Date: 12/12/2018"<<endl;
                    cout<<"Prescription: Thiazide Diuretics 1-0-1"<<endl;
                    cout<<"Review date: 22/04/2022"<<endl;
                break;
                    
                case 456:
                    cout<<"Name: P.Sadhiya"<<endl;
                    cout<<"Gender: Female"<<endl;
                    cout<<"D.O.B: 5/25/1965"<<endl;
                    cout<<"Age: 53"<<endl;
                    cout<<"Blood-group: AB+ve"<<endl;
                    cout<<"Phone number: 9812755299"<<endl;
                    cout<<"Doctor: Dr.Helen"<<endl;
                    cout<<"Problem: COVID"<<endl;
                    cout<<"Date: 12/01/2022"<<endl;
                    cout<<"Prescription: Dolo 650 1-1-1"<<endl;
                    cout<<"Review date: 25/01/2022"<<endl;
                break;
                
                case 789:
                    cout<<"Name: D.Gugan"<<endl;
                    cout<<"Gender: Male"<<endl;
                    cout<<"D.O.B: 3/12/1980"<<endl;
                    cout<<"Age: 42"<<endl;
                    cout<<"Blood-group: B-ve"<<endl;
                    cout<<"Phone number: 9812757689"<<endl;
                    cout<<"Doctor: Dr.Yogesh"<<endl;
                    cout<<"Problem: Cancer"<<endl;
                    cout<<"Date: 9/8/2017"<<endl;
                    cout<<"Prescription: Azacitidine 1-1-1, Capecitabine 1-1-1"<<endl;
                    cout<<"Review date: 12/02/2022"<<endl;
                break;
                    
                case 147:
                    cout<<"Name: L.Keshav"<<endl;
                    cout<<"Gender: Male"<<endl;
                    cout<<"D.O.B: 29/2/1989"<<endl;
                    cout<<"Age: 35"<<endl;
                    cout<<"Blood-group: A-ve"<<endl;
                    cout<<"Phone number: 9814455889"<<endl;
                    cout<<"Doctor: Dr.Sathyaprasanna"<<endl;
                    cout<<"Problem: I-VIRUS"<<endl;
                    cout<<"Date: 12/5/2014"<<endl;
                    cout<<"Prescription: Profol 1-1-1, Thiopental 1-1-1"<<endl;
                    cout<<"In-patient"<<endl;
                break;
                
                case 258:
                    cout<<"Name: P.Varun"<<endl;
                    cout<<"Gender: Male"<<endl;
                    cout<<"D.O.B: 9/8/1996"<<endl;
                    cout<<"Age: 25"<<endl;
                    cout<<"Blood group: O+ve"<<endl;
                    cout<<"Phone number: 9812789889"<<endl;
                    cout<<"Doctor: Dr.Helen"<<endl;
                    cout<<"Problem: Arthritis"<<endl;
                    cout<<"Date: 12/1/2020"<<endl;
                    cout<<"Prescription: Humira 1-1-0, Rituxan 0-0-1"<<endl;
                    cout<<"Review date: 13/03/2022"<<endl;
                break;
                
                case 369:
                    cout<<"Name: S.Aishwarya"<<endl;
                    cout<<"Gender: Female"<<endl;
                    cout<<"D.O.B: 5/5/1999"<<endl;
                    cout<<"Age: 23"<<endl;
                    cout<<"Blood-group: AB-ve"<<endl;
                    cout<<"Phone number: 9844455889"<<endl;
                    cout<<"Doctor: Dr.Thejas Shree"<<endl;
                    cout<<"Problem: Alzheimer's"<<endl;
                    cout<<"Date: 1/2/2022"<<endl;
                    cout<<"Prescription: Onepezil 1-0-0, Rivastigmine 1-1-0"<<endl;
                    cout<<"In-patient"<<endl;
                break;
                
                case 159:
                    cout<<"Name: M.Preetha"<<endl;
                    cout<<"Gender: Female"<<endl;
                    cout<<"D.O.B: 7/4/1960"<<endl;
                    cout<<"Age: 71"<<endl;
                    cout<<"Blood-group: a+ve"<<endl;
                    cout<<"Phone number: 9812755889"<<endl;
                    cout<<"Doctor: Dr.Praveenaa"<<endl;
                    cout<<"Problem: Heart attack"<<endl;
                    cout<<"Date: 12/1/2022"<<endl;
                    cout<<"Prescription : Enalapril 1-0-1, Fozinapril 1-0-0"<<endl;
                    cout<<"In-patient"<<endl;
                break;
                
                case 753:
                    cout<<"Name: C.Selvi"<<endl;
                    cout<<"Gender: Female"<<endl;
                    cout<<"D.O.B: 22/2/1988"<<endl;
                    cout<<"Age: 44"<<endl;
                    cout<<"Blood-group: A+ve"<<endl;
                    cout<<"Phone number: 7892755889"<<endl;
                    cout<<"Doctor: Dr.Yogesh"<<endl;
                    cout<<"Problem: cancer"<<endl;
                    cout<<"Date: 18/10/2012"<<endl;
                    cout<<"Prescription: Cladridine 1-1-1, 5-Fluorouracil 0-1-1"<<endl;
                    cout<<"Review date - 31/01/2022"<<endl;
                break;
                
                case 713:
                    cout<<"Name: H.Riya"<<endl;
                    cout<<"Gender: Female"<<endl;
                    cout<<"D.O.B: 5/12/1992"<<endl;
                    cout<<"Age: 29"<<endl;
                    cout<<"Blood-group: A+ve"<<endl;
                    cout<<"Phone number: 6382755889"<<endl;
                    cout<<"Doctor: Dr.Nandhakumar"<<endl;
                    cout<<"Problem: Pregnant"<<endl;
                    cout<<"Date: 12/8/2021"<<endl;
                    cout<<"Prescription: Monistat 1-0-0, Maalox 0-1-1"<<endl;
                    cout<<"Review date: 15/03/2022"<<endl;
                break;
                
                default :
                    cout<<"User ID Doesn't exist!!\nTry again!!"<<endl<<"_____________________________________"<<endl;
                    patient_data();
                break;
            }
            
            goto Admin2345_power;
        break;
        
        case 5:
            cout<<"REGESTRATION:"<<endl;
            Charector:
            cout<<"Charector(administrator, doctor and patient): ";
            cin>>select_charector;
            cout<<endl;
            
            Administrator_detail_register:
                if(select_charector=="administrator"){
                    cout<<"Name: ";
                    cin>>ad_name;
                    cout<<"Gender: ";
                    cin>>ad_gender;
                    cout<<"D.O.B: ";
                    cin>>ad_dob;
                    cout<<"Age: ";
                    cin>>ad_age;
                    cout<<"Blood Group: ";
                    cin>>ad_blood;
                    cout<<"E-mail id: ";
                    cin>>ad_mail;
                    cout<<"Contact Number: ";
                    cin>>ad_number;
                    cout<<"Working Time: ";
                    cin>>ad_time;
                    
                    cout<<"\n____________________________________\n";
                    goto Administrator_detail_check;
                }
                
                else if(select_charector=="doctor"){
            Doctor_detail_register:
                    cout<<"Name: ";
                    cin>>doc_name;
                    cout<<"Gender: ";
                    cin>>doc_gender;
                    cout<<"D.O.B: ";
                    cin>>doc_dob;
                    cout<<"Age: ";
                    cin>>doc_age;
                    cout<<"Blood Group: ";
                    cin>>doc_blood;
                    cout<<"E-mail id: ";
                    cin>>doc_mail;
                    cout<<"Contact Number: ";
                    cin>>doc_number;
                    cout<<"Academics: ";
                    cin>>doc_acad;
                    cout<<"Speciality: ";
                    cin>>doc_speacial;
                    
                    cout<<"\n____________________________________\n";
                    goto Doctor_detail_check;
                }
                
                else if(select_charector=="patient"){
            Patient_detail_register:
                    cout<<"Name: ";
                    cin>>pa_name;
                    cout<<"Gender: ";
                    cin>>pa_gender;
                    cout<<"D.O.B: ";
                    cin>>pa_dob;
                    cout<<"Age: ";
                    cin>>pa_age;
                    cout<<"Blood Group: ";
                    cin>>pa_blood;
                    cout<<"E-mail id: ";
                    cin>>pa_mail;
                    cout<<"Contact Number: ";
                    cin>>pa_number;
                    cout<<"Height: ";
                    cin>>pa_height;
                    cout<<"Weight: ";
                    cin>>pa_weight;
                    cout<<"Blood Pressure: ";
                    cin>>pa_bp;
                    cout<<"Sugar Level: ";
                    cin>>pa_sugar;
                    cout<<"Check up Doctor Name: ";
                    cin>>pa_doc;
                    
                    cout<<"\n____________________________________\n";
                    goto Patient_detail_check;
                }
                
                else{
                    cout<<"Unknown Charector\nTry again!!\n____________________________________\n\n";
                    goto Charector;
                }
                
    ////////////////////////////// CHECK CHARECTOR (REG) BY ADMIN STARTS //////////////////////////////////////
        
    Administrator_detail_check:
        cout<<"CHECK CHARECTOR PROFILE"<<endl<<endl;
        
        cout<<"Name: "<<ad_name<<endl;
        cout<<"Gender: "<<ad_gender<<endl;
        cout<<"D.O.B: "<<ad_dob<<endl;
        cout<<"Age: "<<ad_age<<endl;
        cout<<"Blood Group: "<<ad_blood<<endl;
        cout<<"E-mail id: "<<ad_mail<<endl;
        cout<<"Contact Number: "<<ad_number<<endl;
        cout<<"Working Time: "<<ad_time<<endl;
        cout<<"____________________________________\nConfirm(Yes/No): ";
        cin>>ad_confirmation;
        
        ad_confirmation:
            cout<<"\n";
                if(ad_confirmation=="yes"){
                    cout<<"Your responce is recorded"<<endl;
                    goto Admin2345_power;
                }
                else if(ad_confirmation=="no"){
                    goto Administrator_detail_register;
                }
                else{
                    cout<<"Not in the Option!!\nTry again!!\n____________________________________\n\n";
                    goto Administrator_detail_check;
                }
    
    Doctor_detail_check:
        cout<<"CHECK YOUR PROFILE"<<endl<<endl;
    
        cout<<"Name: "<<doc_name<<endl;
        cout<<"Gender: "<<doc_gender<<endl;
        cout<<"D.O.B: "<<doc_dob<<endl;
        cout<<"Age: "<<doc_age<<endl;
        cout<<"Blood Group: "<<doc_blood<<endl;
        cout<<"E-mail id: "<<doc_mail<<endl;
        cout<<"Contact Number: "<<doc_number<<endl;
        cout<<"Academics: "<<doc_acad<<endl;
        cout<<"Speciality: "<<doc_speacial<<endl;
        cout<<"____________________________________\nConfirm(Yes/No): ";
        cin>>doc_confirmation;
        
        doc_confirmation:
            cout<<"\n";
                if(doc_confirmation=="yes"){
                    cout<<"Your responce is recorded"<<endl;
                    goto Admin2345_power;
                }
                else if(doc_confirmation=="no"){
                    goto Doctor_detail_register;
                }
                else{
                    cout<<"Not in the Option!!\nTry again!!\n____________________________________\n\n";
                    goto Doctor_detail_check;
                }
    
    Patient_detail_check:
        cout<<"CHECK YOUR PROFILE"<<endl<<endl;
        
        cout<<"Name: "<<pa_name<<endl;
        cout<<"Gender: "<<pa_gender<<endl;
        cout<<"D.O.B: "<<pa_dob<<endl;
        cout<<"Age: "<<pa_age<<endl;
        cout<<"Blood Group: "<<pa_blood<<endl;
        cout<<"E-mail id: "<<pa_mail<<endl;
        cout<<"Contact Number: "<<pa_number<<endl;
        cout<<"Height: "<<pa_height<<endl;
        cout<<"Weight: "<<pa_weight<<endl;
        cout<<"Blood Pressure: "<<pa_bp<<endl;
        cout<<"Sugar Level: "<<pa_sugar<<endl;
        cout<<"Check up Doctor Name: "<<pa_doc<<endl;
        cout<<"____________________________________\nConfirm(Yes/No): ";
        cin>>pa_confirmation;
        
        pa_confirmation:
            cout<<"\n";
                if(pa_confirmation=="yes"){
                    cout<<"Your responce is recorded"<<endl;
                    goto Admin2345_power;
                }
                else if(pa_confirmation=="no"){
                    goto Patient_detail_register;
                }
                else{
                    cout<<"Not in the Option!!\nTry again!!\n____________________________________\n\n";
                    goto Patient_detail_check;
                }
    ////////////////////////////// CHECK CHARECTOR (REG) BY ADMIN ENDS //////////////////////////////////////
    
            goto Admin2345_power;
            
        break;
        
        default:
            cout<<"Not in the option!!\ntry again\n_____________________________________\n";
            goto Admin2345_power;
        break;
    }
}

///////////////////////////////////// ADMIN DATA ENDS ///////////////////////////////////////



int charector_get_data(){
    /////////////////////////////////////// SELECT CHARECTOR (REG) STARTS /////////////////////////////////////////////////

    string select_charector;
    string ad_name, ad_gender, ad_dob, ad_age, ad_blood, ad_mail, ad_number, ad_time;
    string doc_name, doc_gender, doc_dob, doc_age, doc_blood, doc_mail, doc_number, doc_acad, doc_speacial;
    string pa_name, pa_gender, pa_dob, pa_age, pa_blood, pa_mail, pa_number, pa_height, pa_weight, pa_bp, pa_sugar, pa_doc;
    string ad_confirmation, doc_confirmation, pa_confirmation;
    
    Charector:
        cout<<"Charector(administrator, doctor and patient): ";
        cin>>select_charector;
        cout<<endl;
        
        Administrator_detail_register:
            if(select_charector=="administrator"){
                cout<<"Name: ";
                cin>>ad_name;
                cout<<"Gender: ";
                cin>>ad_gender;
                cout<<"D.O.B: ";
                cin>>ad_dob;
                cout<<"Age: ";
                cin>>ad_age;
                cout<<"Blood Group: ";
                cin>>ad_blood;
                cout<<"E-mail id: ";
                cin>>ad_mail;
                cout<<"Contact Number: ";
                cin>>ad_number;
                cout<<"Working Time: ";
                cin>>ad_time;
                
                cout<<"\n____________________________________\n";
                goto Administrator_detail_check;
            }
            
            else if(select_charector=="doctor"){
        Doctor_detail_register:
                cout<<"Name: ";
                cin>>doc_name;
                cout<<"Gender: ";
                cin>>doc_gender;
                cout<<"D.O.B: ";
                cin>>doc_dob;
                cout<<"Age: ";
                cin>>doc_age;
                cout<<"Blood Group: ";
                cin>>doc_blood;
                cout<<"E-mail id: ";
                cin>>doc_mail;
                cout<<"Contact Number: ";
                cin>>doc_number;
                cout<<"Academics: ";
                cin>>doc_acad;
                cout<<"Speciality: ";
                cin>>doc_speacial;
                
                cout<<"\n____________________________________\n";
                goto Doctor_detail_check;
            }
            
            else if(select_charector=="patient"){
        Patient_detail_register:
                cout<<"Name: ";
                cin>>pa_name;
                cout<<"Gender: ";
                cin>>pa_gender;
                cout<<"D.O.B: ";
                cin>>pa_dob;
                cout<<"Age: ";
                cin>>pa_age;
                cout<<"Blood Group: ";
                cin>>pa_blood;
                cout<<"E-mail id: ";
                cin>>pa_mail;
                cout<<"Contact Number: ";
                cin>>pa_number;
                cout<<"Height: ";
                cin>>pa_height;
                cout<<"Weight: ";
                cin>>pa_weight;
                cout<<"Blood Pressure: ";
                cin>>pa_bp;
                cout<<"Sugar Level: ";
                cin>>pa_sugar;
                cout<<"Check up Doctor Name: ";
                cin>>pa_doc;
                
                cout<<"\n____________________________________\n";
                goto Patient_detail_check;
            }
            
            else{
                cout<<"Unknown Charector\nTry again!!\n____________________________________\n\n";
                goto Charector;
            }
            
////////////////////////////// CHECK CHARECTOR (REG) STARTS //////////////////////////////////////
    
Administrator_detail_check:
    cout<<"CHECK YOUR PROFILE"<<endl<<endl;
    
    cout<<"Name: "<<ad_name<<endl;
    cout<<"Gender: "<<ad_gender<<endl;
    cout<<"D.O.B: "<<ad_dob<<endl;
    cout<<"Age: "<<ad_age<<endl;
    cout<<"Blood Group: "<<ad_blood<<endl;
    cout<<"E-mail id: "<<ad_mail<<endl;
    cout<<"Contact Number: "<<ad_number<<endl;
    cout<<"Working Time: "<<ad_time<<endl;
    cout<<"____________________________________\nConfirm(Yes/No): ";
    cin>>ad_confirmation;
    
    ad_confirmation:
        cout<<"\n";
            if(ad_confirmation=="yes"){
                cout<<"Your responce is recorded"<<endl;
                cout<<"We will reach you soon"<<endl;
                cout<<"Thank you!"<<endl;
                return 0;
            }
            else if(ad_confirmation=="no"){
                goto Administrator_detail_register;
            }
            else{
                cout<<"Not in the Option!!\nTry again!!\n____________________________________\n\n";
                goto Administrator_detail_check;
            }

Doctor_detail_check:
    cout<<"CHECK YOUR PROFILE"<<endl<<endl;

    cout<<"Name: "<<doc_name<<endl;
    cout<<"Gender: "<<doc_gender<<endl;
    cout<<"D.O.B: "<<doc_dob<<endl;
    cout<<"Age: "<<doc_age<<endl;
    cout<<"Blood Group: "<<doc_blood<<endl;
    cout<<"E-mail id: "<<doc_mail<<endl;
    cout<<"Contact Number: "<<doc_number<<endl;
    cout<<"Academics: "<<doc_acad<<endl;
    cout<<"Speciality: "<<doc_speacial<<endl;
    cout<<"____________________________________\nConfirm(Yes/No): ";
    cin>>doc_confirmation;
    
    doc_confirmation:
        cout<<"\n";
            if(doc_confirmation=="yes"){
                cout<<"Your responce is recorded"<<endl;
                cout<<"We will reach you soon"<<endl;
                cout<<"Thank you!"<<endl;
                return 0;
            }
            else if(doc_confirmation=="no"){
                goto Doctor_detail_register;
            }
            else{
                cout<<"Not in the Option!!\nTry again!!\n____________________________________\n\n";
                goto Doctor_detail_check;
            }

Patient_detail_check:
    cout<<"CHECK YOUR PROFILE"<<endl<<endl;
    
    cout<<"Name: "<<pa_name<<endl;
    cout<<"Gender: "<<pa_gender<<endl;
    cout<<"D.O.B: "<<pa_dob<<endl;
    cout<<"Age: "<<pa_age<<endl;
    cout<<"Blood Group: "<<pa_blood<<endl;
    cout<<"E-mail id: "<<pa_mail<<endl;
    cout<<"Contact Number: "<<pa_number<<endl;
    cout<<"Height: "<<pa_height<<endl;
    cout<<"Weight: "<<pa_weight<<endl;
    cout<<"Blood Pressure: "<<pa_bp<<endl;
    cout<<"Sugar Level: "<<pa_sugar<<endl;
    cout<<"Check up Doctor Name: "<<pa_doc<<endl;
    cout<<"____________________________________\nConfirm(Yes/No): ";
    cin>>pa_confirmation;
    
    pa_confirmation:
        cout<<"\n";
            if(pa_confirmation=="yes"){
                cout<<"Your responce is recorded"<<endl;
                return 0;
            }
            else if(pa_confirmation=="no"){
                goto Patient_detail_register;
            }
            else{
                cout<<"Not in the Option!!\nTry again!!\n____________________________________\n\n";
                goto Patient_detail_check;
            }
////////////////////////////// CHECK CHARECTOR (REG) ENDS //////////////////////////////////////


/////////////////////////////////////// SELECT CHARECTOR (REG) ENDS /////////////////////////////////////////////////            


    return 0;
}

///////////////////////////////////// HOME PAGE STARTS ////////////////////////////////////////

int main()
{
    int index;
    string login_username, login_charector, register_username, register_user_id, register_confirm_user_id;
    
    cout<<"\t\t\tSAVE LIFE HOSPITAL\n\t\t\tADMINISTRATION PAGE\n\n";
    cout<<"For Log in: Press 1\nFor Register: Press 2\nYour Choice: ";
    cin>>index;
    
    cout<<"____________________________________\n";
    switch(index){
        case 1:
            log_in:
            cout<<"Charector(administrator, doctor and patient): ";
            cin>>login_charector;
            
                if(login_username,login_charector=="administrator"){
                    administrator_data();
                }
                
                else if(login_username,login_charector=="doctor"){
                    doctor_data();
                }
                
                else if(login_username,login_charector=="patient"){
                    patient_data();
                }
                
                else{
                    cout<<"Password is incorrect\nTry again!!\n____________________________________\n\n";
                    goto log_in;
                }
        break;
        
        case 2:
                cout<<"User Name: ";
                cin>>register_username;
            Register:
                cout<<"Create User ID: ";
                cin>>register_user_id;
                cout<<"Confirm User ID: ";
                cin>>register_confirm_user_id;
                    if(register_user_id==register_confirm_user_id){
                        cout<<"\nSuccessfully registered\n____________________________________\n\n";
                        charector_get_data();
                    }
                    else{
                        cout<<"\nBoth are Not Same\nTry again!!\n____________________________________\n\n";
                        goto Register;
                    }
        break;
    }
///////////////////////////////////// HOME PAGE ENDS ////////////////////////////////////////

    return 0;
}










