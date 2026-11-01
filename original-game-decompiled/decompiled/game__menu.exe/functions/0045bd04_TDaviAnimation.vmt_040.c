
/* ==== TDaviAnimation.vmt_040 @ 0045bd04 ==== 
 * signature: undefined __register TDaviAnimation.vmt_040(int * param_1, int param_2)
 * body: 0045bd04-0045bd1a
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviAnimation_vmt_040(int *param_1,int param_2)

{
  if (param_2 != *(int *)(param_1[10] + 0xc)) {
    *(int *)(param_1[10] + 0xc) = param_2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


