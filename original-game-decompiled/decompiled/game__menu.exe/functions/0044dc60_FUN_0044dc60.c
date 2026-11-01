
/* ==== FUN_0044dc60 @ 0044dc60 ==== 
 * signature: undefined __register FUN_0044dc60(int param_1, UINT param_2, undefined1 param_3)
 * body: 0044dc60-0044dc97
 */

void FUN_0044dc60(int param_1,UINT param_2,undefined1 param_3)

{
  UINT_PTR UVar1;
  
  FUN_0044dc98(param_1);
  UVar1 = SetTimer((HWND)0x0,0,param_2,FUN_0044bc6c);
  *(short *)(param_1 + 0x7a) = (short)UVar1;
  *(undefined1 *)(param_1 + 0x79) = param_3;
  if (*(short *)(param_1 + 0x7a) == 0) {
    FUN_0044de34(param_1);
  }
  return;
}


