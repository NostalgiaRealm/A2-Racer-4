
/* ==== FUN_004cef55 @ 004cef55 ==== 
 * signature: undefined __stdcall FUN_004cef55(undefined4 param_1, undefined4 param_2, void * param_3)
 * body: 004cef55-004cef75
 */

void FUN_004cef55(undefined4 param_1,undefined4 param_2,void *param_3)

{
  int unaff_EBX;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_EBX + 0x10) = *(undefined4 *)(unaff_ESI + 0x10);
  *(undefined4 *)(unaff_EBX + 0x14) = *(undefined4 *)(unaff_ESI + 0x14);
  ExceptionList = param_3;
  return;
}


