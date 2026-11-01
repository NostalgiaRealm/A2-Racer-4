
/* ==== FUN_004e4ca6 @ 004e4ca6 ==== 
 * signature: undefined __fastcall FUN_004e4ca6(int param_1, int param_2, undefined8 param_3)
 * body: 004e4ca6-004e4ca7
 */

void __fastcall FUN_004e4ca6(int param_1,int param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  char *in_EAX;
  char *this;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  char *unaff_EDI;
  
  out(*unaff_ESI,(short)param_2);
  *in_EAX = *in_EAX + (char)param_1;
  cVar3 = (char)((uint)in_EAX >> 8);
  *(char *)(param_2 + 0x49) = *(char *)(param_2 + 0x49) + cVar3;
  *(char *)(param_1 + -0x2fffb1b8) = *(char *)(param_1 + -0x2fffb1b8) + (char)unaff_EBX;
  this = (char *)(param_1 + -2);
  cVar2 = (char)in_EAX;
  *unaff_EDI = *unaff_EDI + cVar2;
  *(char *)((int)unaff_ESI + -1) = *(char *)((int)unaff_ESI + -1) + (char)((uint)unaff_EBX >> 8);
  *(char *)(unaff_EBP + 0x4a) = *(char *)(unaff_EBP + 0x4a) + (char)((uint)(param_2 + -2) >> 8);
  pcVar1 = (char *)(param_2 + 0x4ae3004c + (int)this * 2);
  *pcVar1 = *pcVar1 + (char)((uint)this >> 8);
  cRam5c004e4b = cRam5c004e4b + cVar3;
  cVar3 = (char)(param_2 + -2);
  *(char *)(unaff_EBX + 0x4e4a) = *(char *)(unaff_EBX + 0x4e4a) + cVar3;
  *in_EAX = *in_EAX + cVar2;
  *this = *this + cVar2;
  *in_EAX = *in_EAX + (char)((uint)(unaff_EBX + -2) >> 8);
  in_EAX[0x56909090] = in_EAX[0x56909090] + cVar3 + (char)this;
  FUN_004e3660(this,param_3._1_4_);
  FUN_004d43a0(param_3._1_4_,(byte)*(undefined4 *)(param_1 + 0xe));
  (**(code **)(**(int **)(param_1 + 0x12) + 0x20))(param_3._1_4_);
  return;
}


