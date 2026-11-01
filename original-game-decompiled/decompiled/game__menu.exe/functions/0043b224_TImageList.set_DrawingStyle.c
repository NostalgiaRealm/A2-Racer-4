
/* ==== TImageList.set_DrawingStyle @ 0043b224 ==== 
 * signature: undefined __register TImageList.set_DrawingStyle(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 0043b224-0043b23d
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TImageList_set_DrawingStyle(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((char)param_2 != (char)param_1[0xd]) {
    *(char *)(param_1 + 0xd) = (char)param_2;
    FUN_00403178(param_1,param_2,param_3);
  }
  return;
}


