
/* ==== FUN_004544c0 @ 004544c0 ==== 
 * signature: undefined4 __cdecl FUN_004544c0(undefined4 param_1, int param_2)
 * body: 004544c0-004544ef
 */

undefined4 __cdecl FUN_004544c0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if ((*(int *)(param_2 + 0x28) != -1) &&
     (iVar1 = *(int *)(param_2 + 0x28) * 0xf0, *(int *)(iVar1 + 0x2c + DAT_00715e50) == 0)) {
    *(undefined4 *)(iVar1 + 0x2c + DAT_00715e50) = 1;
  }
  return 0;
}


