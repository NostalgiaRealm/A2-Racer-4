
/* ==== TDaviAnimation.vmt_034 @ 0045bd1c ==== 
 * signature: undefined __register TDaviAnimation.vmt_034(int * param_1, int param_2)
 * body: 0045bd1c-0045bd32
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviAnimation_vmt_034(int *param_1,int param_2)

{
  if (param_2 != *(int *)(param_1[10] + 0x10)) {
    *(int *)(param_1[10] + 0x10) = param_2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


