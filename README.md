# CST2550

 public static void main(String[] args) {
      
        int totalScore = 0;
       
    int[] var1 = new int[] { 1, 2, 3, 4, 5 };

        for (int var2 = 0; var2 < var1.length; ++var2) {
            var1[var2] = (int) (Math.random() * 6.0) + 1;
        }


        System.out.println("Choose the categories 1-6");
          Scanner scanner = new Scanner(System.in);
           for (int i = 0;  i <= 7; i++) {
           int ChooseCategories;
           
           
        }

       
    
        System.out.println(Arrays.toString(var1));

        for (int round = 1; round <= 7; round++) {
            System.out.println("Round" + round);

            System.out.println(Arrays.toString(var1));

            for (int player = 1; player <= 2; player++) {
                System.out.println("Player" + player);
                System.out.println("Player" + (player) + "turn");

                System.out.println(Arrays.toString(var1));

            }

            for (int throwsleft = 3; throwsleft > 0; throwsleft--) {
                System.out.println("The number of throws is " + throwsleft);



            }

               System.out.println("Dice Game");
        Scanner sc = new Scanner(System.in);
        System.out.println("Press 1 to play the game or press 0 to exit");
        int user = sc.nextInt();
       sc.close();

        if (user ==0) {

            System.exit(0);
           

        }

            

        }
      
    }

}





