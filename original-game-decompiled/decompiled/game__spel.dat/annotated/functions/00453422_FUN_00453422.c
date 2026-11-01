
/* ==== FUN_00453422 @ 00453422 ==== 
 * signature: undefined __fastcall FUN_00453422(char * param_1, char param_2)
 * body: 00453422-00453423
 */

void __fastcall FUN_00453422(char *param_1,char param_2)

{
  int in_EAX;
  char cVar1;
  char *unaff_EBX;
  int unaff_ESI;
  int *piVar2;
  char *unaff_EDI;
  byte in_CF;
  
  piVar2 = (int *)(unaff_ESI + *(int *)(in_EAX * 2 + 0x45341f00) + (uint)in_CF);
  cVar1 = (char)unaff_EBX;
  *unaff_EDI = *unaff_EDI + cVar1;
  *unaff_EBX = *unaff_EBX + param_2;
  *unaff_EDI = *unaff_EDI + cVar1;
  *param_1 = *param_1 + cVar1;
  *param_1 = *param_1 + cVar1;
  *(char *)((int)piVar2 + -0x42) = *(char *)((int)piVar2 + -0x42) + param_2;
  do {
    FUN_004a6bb0(*piVar2,piVar2[1]);
    piVar2 = piVar2 + 2;
  } while ((int)piVar2 < 0x5a2b50);
  FUN_004556e0();
  FUN_004559d0();
  FUN_004550c0();
  return;
}


