
/* ==== FUN_00442ad4 @ 00442ad4 ==== 
 * signature: undefined __register FUN_00442ad4(int param_1, UINT param_2, undefined1 param_3)
 * body: 00442ad4-00442b0b
 */

void FUN_00442ad4(int param_1,UINT param_2,undefined1 param_3)

{
  UINT_PTR UVar1;
  
  FUN_00442b0c(param_1);
  UVar1 = SetTimer((HWND)0x0,0,param_2,FUN_00440ccc);
  *(short *)(param_1 + 0x7a) = (short)UVar1;
  *(undefined1 *)(param_1 + 0x79) = param_3;
  if (*(short *)(param_1 + 0x7a) == 0) {
    FUN_00442ca8(param_1);
  }
  return;
}


