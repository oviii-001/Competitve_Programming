<<<<<<< HEAD
                                    /*##########################################################
                                    ############################################################
                                    ###                                                      ###
                                    ###             Author: ISMAM HASAN OVI                  ###
                                    ###            Created: 28-04-2024 | 14:01:24            ###
                                    ###                                                      ###
                                    ############################################################
                                    ##########################################################*/

import java.util.Scanner;
import java.lang.String;

public class Word {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        String word = input.nextLine();

        int uppercaseCount = 0;
        int lowercaseCount = 0;

        for(char ch : word.toCharArray()){
            if(Character.isUpperCase(ch)){
                uppercaseCount++;
            }
            if(Character.isLowerCase(ch)){
                lowercaseCount++;
            }
        }

        if(uppercaseCount <= lowercaseCount){
            System.out.println(word.toLowerCase());
        }
        else{
            System.out.println(word.toUpperCase());
        }

        input.close();
    }
=======
                                    /*##########################################################
                                    ############################################################
                                    ###                                                      ###
                                    ###             Author: ISMAM HASAN OVI                  ###
                                    ###            Created: 28-04-2024 | 14:01:24            ###
                                    ###                                                      ###
                                    ############################################################
                                    ##########################################################*/

import java.util.Scanner;
import java.lang.String;

public class Word {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        String word = input.nextLine();

        int uppercaseCount = 0;
        int lowercaseCount = 0;

        for(char ch : word.toCharArray()){
            if(Character.isUpperCase(ch)){
                uppercaseCount++;
            }
            if(Character.isLowerCase(ch)){
                lowercaseCount++;
            }
        }

        if(uppercaseCount <= lowercaseCount){
            System.out.println(word.toLowerCase());
        }
        else{
            System.out.println(word.toUpperCase());
        }

        input.close();
    }
>>>>>>> cf62158 (13/12/2024 | 05:40 PM)
}