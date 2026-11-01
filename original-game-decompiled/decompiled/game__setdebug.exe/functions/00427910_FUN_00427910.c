
/* ==== FUN_00427910 @ 00427910 ==== 
 * signature: undefined __register FUN_00427910(int * param_1, uint * param_2)
 * body: 00427910-00427974
 */

void FUN_00427910(int *param_1,uint *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  
  uVar2 = FUN_00424dbc((int)param_1);
  if ((char)uVar2 != '\0') {
    *param_2 = *param_2 | 0x2000;
  }
  uVar2 = FUN_00424dec((int)param_1);
  if ((char)uVar2 != '\0') {
    *param_2 = *param_2 | 0x4000;
  }
  cVar1 = FUN_00402ef0(param_1,extraout_EDX,extraout_ECX);
  if (cVar1 != '\0') {
    cVar1 = FUN_00402ef0(param_1,extraout_EDX_00,extraout_ECX_00);
    if (cVar1 == '\0') {
      *param_2 = *param_2 | 0x1000;
    }
    else {
      cVar1 = FUN_00402ef0(param_1,extraout_EDX_01,extraout_ECX_01);
      if (cVar1 == '\x01') {
        *param_2 = *param_2;
      }
    }
  }
  return;
}


