
/* ==== TDaviAnimation.vmt_014 @ 0045c860 ==== 
 * signature: undefined __register TDaviAnimation.vmt_014(int * param_1, int * param_2, undefined4 param_3)
 * body: 0045c860-0045c8b4
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviAnimation_vmt_014(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x1c))();
  if (cVar1 == '\0') {
    piVar2 = (int *)(**(code **)(*param_1 + 0x70))(param_1,param_1[0xb]);
    (**(code **)(*piVar2 + 0x3c))(piVar2,(char)param_1[0x13]);
    FUN_00457260(piVar2,param_1[0x14]);
    FUN_0045727c(piVar2,(char)param_1[0x15]);
    FUN_00419200(param_2,param_3,piVar2);
  }
  return;
}


