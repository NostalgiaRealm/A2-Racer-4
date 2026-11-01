
/* ==== TDaviAnimation.vmt_080 @ 0045c1c0 ==== 
 * signature: undefined TDaviAnimation.vmt_080(void)
 * body: 0045c1c0-0045c1d7
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviAnimation_vmt_080(int *param_1,char param_2)

{
  if ((param_2 != *(char *)((int)param_1 + 0x3d)) &&
     (*(char *)((int)param_1 + 0x3d) = param_2, param_2 != '\0')) {
    (**(code **)(*param_1 + 0x60))();
  }
  return;
}


