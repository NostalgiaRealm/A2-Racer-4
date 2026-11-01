
/* ==== FUN_100064ae @ 100064ae ==== 
 * signature: undefined4 __fastcall FUN_100064ae(undefined4 param_1, undefined2 param_2)
 * body: 100064ae-100064af
 */

undefined4 __fastcall FUN_100064ae(undefined4 param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  int in_EAX;
  int unaff_EBP;
  
  *(undefined1 *)(in_EAX * 2 + 0x10) = 0;
  *(char *)((int)&ExceptionList + in_EAX) = *(char *)((int)&ExceptionList + in_EAX) + (char)param_2;
  uVar2 = in(param_2);
  pcVar1 = (char *)((int)&ExceptionList + CONCAT31((int3)((uint)in_EAX >> 8),uVar2));
  *pcVar1 = *pcVar1 + (char)param_2;
  return *(undefined4 *)(unaff_EBP + 8);
}


