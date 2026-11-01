
/* ==== FUN_004214c0 @ 004214c0 ==== 
 * signature: bool __cdecl FUN_004214c0(int param_1)
 * body: 004214c0-00421546
 */

bool __cdecl FUN_004214c0(int param_1)

{
  int iVar1;
  undefined4 local_c [3];
  
  iVar1 = FUN_004b4030(local_c,DAT_0073b0d0 +
                               *(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x24 + DAT_00715e50
                                       ) * 0xa9 + 0x10);
  return *(float *)(iVar1 + 4) <= 0.2;
}


