
/* ==== TDaviAnimation.vmt_03c @ 0045bd34 ==== 
 * signature: undefined __register TDaviAnimation.vmt_03c(int * param_1, char param_2)
 * body: 0045bd34-0045bd47
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviAnimation_vmt_03c(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x13]) {
    *(char *)(param_1 + 0x13) = param_2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


