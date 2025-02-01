void send_message(void)

{
  char email_input [112];
  char message_input [1008];
  
  puts("please provide your bosses email!");
  printf(">> ");
  __isoc99_scanf("%99s%*c",email_input);
  printf("email provided: ");
  printf(email_input);
  putchar(10); //printf("\n") lol
  puts("now please provide the message!");
  fgets(message_input,4096,stdin); //Im planning to overflow ret addr to email_input using this message_input
  puts("Got it! we will send the message for him later!");
  return;
}
