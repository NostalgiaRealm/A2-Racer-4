
/* ==== FUN_00539902 @ 00539902 ==== 
 * signature: undefined __fastcall FUN_00539902(int param_1, char param_2)
 * body: 00539902-00539903
 */

void __fastcall FUN_00539902(int param_1,char param_2)

{
  int in_EAX;
  char cVar1;
  undefined4 *unaff_EBX;
  int unaff_ESI;
  
  *(char *)(in_EAX + -0x678bffad) = (char)unaff_EBX;
  cVar1 = (char)((uint)unaff_EBX >> 8);
  *(char *)(unaff_ESI + -0x68) = *(char *)(unaff_ESI + -0x68) + cVar1;
  *(char *)(unaff_ESI + -0x68) = *(char *)(unaff_ESI + -0x68) + cVar1;
  *(char *)(in_EAX + -0x6f6f6f70) = *(char *)(in_EAX + -0x6f6f6f70) + param_2;
  *unaff_EBX = *(undefined4 *)(param_1 + 0x28);
  unaff_EBX[1] = *(undefined4 *)(param_1 + 0x44);
  return;
}


