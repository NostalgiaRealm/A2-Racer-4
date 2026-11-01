
/* ==== TCustomGDIGraphic.vmt_09c @ 0046404c ==== 
 * signature: undefined TCustomGDIGraphic.vmt_09c(void)
 * body: 0046404c-00464072
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomGDIGraphic_vmt_09c(int *param_1,char param_2)

{
  if ((param_2 != *(char *)((int)param_1 + 0x13d)) &&
     (*(char *)((int)param_1 + 0x13d) = param_2, (char)param_1[0x4f] != '\0')) {
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


