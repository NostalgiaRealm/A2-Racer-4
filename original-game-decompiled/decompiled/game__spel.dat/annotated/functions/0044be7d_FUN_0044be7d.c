
/* ==== FUN_0044be7d @ 0044be7d ==== 
 * signature: int __fastcall FUN_0044be7d(int param_1, int param_2)
 * body: 0044be7d-0044be7f
 */

int __fastcall FUN_0044be7d(int param_1,int param_2)

{
  char *pcVar1;
  uint in_EAX;
  longlong lVar2;
  undefined4 uStack0000000c;
  
  *(char *)(param_1 + -0x43) = *(char *)(param_1 + -0x43) + (char)((uint)param_1 >> 8);
  *(char *)(param_2 + 0x360044bd) = *(char *)(param_2 + 0x360044bd) + (char)param_1;
  cRam9d694501 = cRam9d694501 + (char)((uint)param_2 >> 8);
  pcVar1 = (char *)((in_EAX & 0x430044bd) + 0x90909090);
  *pcVar1 = *pcVar1 + (char)param_2;
  lVar2 = __ftol();
  uStack0000000c = (undefined4)lVar2;
  if (DAT_006fb8d4 == 0) {
    lVar2 = __ftol();
    return (int)lVar2 * 1000;
  }
  lVar2 = __ftol();
  return (int)lVar2 * 1000;
}


