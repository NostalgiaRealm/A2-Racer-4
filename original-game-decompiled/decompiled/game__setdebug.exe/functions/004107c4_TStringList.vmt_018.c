
/* ==== TStringList.vmt_018 @ 004107c4 ==== 
 * signature: undefined TStringList.vmt_018(void)
 * body: 004107c4-004107eb
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TStringList_vmt_018(int param_1,int param_2)

{
  if ((param_2 < 0) || (*(int *)(param_1 + 0x10) <= param_2)) {
    FUN_0040fb30(param_1,(undefined4 *)PTR_PTR_00446cd8,param_2);
  }
  return *(undefined4 *)(*(int *)(param_1 + 0xc) + 4 + param_2 * 8);
}


