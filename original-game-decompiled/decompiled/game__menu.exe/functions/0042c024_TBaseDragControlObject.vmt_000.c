
/* ==== TBaseDragControlObject.vmt_000 @ 0042c024 ==== 
 * signature: undefined __register TBaseDragControlObject.vmt_000(int * param_1, undefined4 param_2, undefined4 param_3, char param_4, undefined4 param_5)
 * body: 0042c024-0042c055
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TBaseDragControlObject_vmt_000
               (int *param_1,undefined4 param_2,undefined4 param_3,char param_4,undefined4 param_5)

{
  if (param_4 == '\0') {
    FUN_00403178((int *)param_1[0xe],param_2,param_3);
    param_2 = 0;
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3,param_5);
  return;
}


