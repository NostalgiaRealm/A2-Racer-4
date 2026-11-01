
/* ==== TDaviAnimation.vmt_084 @ 0045bd48 ==== 
 * signature: undefined __register TDaviAnimation.vmt_084(int * param_1, int param_2)
 * body: 0045bd48-0045bd5b
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviAnimation_vmt_084(int *param_1,int param_2)

{
  if (param_2 != param_1[0x14]) {
    param_1[0x14] = param_2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


