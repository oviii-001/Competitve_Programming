/*##########################################################
############################################################
###                                                      ###
###             Author: ISMAM HASAN OVI                  ###
###            Created: 20-09-2024 | 11:34:29            ###
###                                                      ###
############################################################
##########################################################*/

import java.util.Scanner;

public class BeautifulMatrix {
    public static void main(String[] args) {
        try (Scanner in = new Scanner(System.in)) {
            int j = 1;
            int i = 1;
            for(i = 1; i <= 5; i++){
                if(in.nextInt() == 1){
                    break;
                }

                if(i == 5){
                    j++;
                    i = 0;
                }
            }
            System.out.println(Math.abs(i-3) + Math.abs(j-3));
        }
    }
}
