
/* ==== TDaviAnimation.vmt_088 @ 0045bd5c ==== 
 * signature: undefined TDaviAnimation.vmt_088(void)
 * body: 0045bd5c-0045bd6f
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviAnimation_vmt_088(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x15]) {
    *(char *)(param_1 + 0x15) = param_2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


