
/* ==== TStringList.vmt_018 @ 00412354 ==== 
 * signature: undefined TStringList.vmt_018(void)
 * body: 00412354-0041237b
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TStringList_vmt_018(int param_1,int param_2)

{
  if ((param_2 < 0) || (*(int *)(param_1 + 0x10) <= param_2)) {
    FUN_004115e8(param_1,(undefined4 *)PTR_PTR_004ab930,param_2);
  }
  return *(undefined4 *)(*(int *)(param_1 + 0xc) + 4 + param_2 * 8);
}


