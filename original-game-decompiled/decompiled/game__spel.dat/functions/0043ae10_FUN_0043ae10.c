
/* ==== FUN_0043ae10 @ 0043ae10 ==== 
 * signature: undefined4 __cdecl FUN_0043ae10(byte param_1, uint param_2, int param_3)
 * body: 0043ae10-0043ae49
 */

/* WARNING: Removing unreachable block (ram,0x0043ae47) */

undefined4 __cdecl FUN_0043ae10(byte param_1,uint param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (int)(((param_2 & 0xff) - (uint)param_1) * param_3) / 100;
  return CONCAT31((int3)((uint)iVar1 >> 8),(char)iVar1 + param_1);
}


