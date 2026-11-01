
/* ==== FUN_0054ef7c @ 0054ef7c ==== 
 * signature: uint __cdecl FUN_0054ef7c(int param_1)
 * body: 0054ef7c-0054efbc
 */

uint __cdecl FUN_0054ef7c(int param_1)

{
  uint uVar1;
  uint uVar2;
  byte local_c [6];
  WCHAR local_6;
  
  if (param_1 == -1) {
    return 0xffffffff;
  }
  param_1 = CONCAT13((char)param_1,(undefined3)param_1);
  local_c[0] = 0;
  local_c[1] = 0;
  local_c[2] = 0;
  local_c[3] = 0;
  uVar1 = FUN_0054ee6a(&local_6,(byte *)((int)&param_1 + 3),1,local_c,(int *)0x0);
  uVar2 = 0xffff;
  if (-1 < (int)uVar1) {
    uVar2 = (uint)(ushort)local_6;
  }
  return uVar2;
}


