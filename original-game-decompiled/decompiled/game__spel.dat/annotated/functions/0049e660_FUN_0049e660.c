
/* ==== FUN_0049e660 @ 0049e660 ==== 
 * signature: int __fastcall FUN_0049e660(int param_1)
 * body: 0049e660-0049e6e6
 */

int __fastcall FUN_0049e660(int param_1)

{
  int iVar1;
  
  FUN_004a0100((uint)(*(int *)(param_1 + 0x58) != 0),
               (byte *)s__s___d__Sound_engine_not_yet_att_005ae7ac);
  iVar1 = (((((*(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x10)) / 100) *
            *(int *)(param_1 + 0x54)) / 100) * *(int *)(*(int *)(param_1 + 0x58) + 0x270)) / 100;
  FUN_004a00b0(iVar1,0,100);
  return iVar1;
}


