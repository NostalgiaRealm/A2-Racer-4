
/* ==== FUN_00427764 @ 00427764 ==== 
 * signature: undefined __register FUN_00427764(int * param_1, int * param_2)
 * body: 00427764-004277de
 */

void FUN_00427764(int *param_1,int *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  
  FUN_00425780((int)param_1,0xb036,param_2,0);
  uVar2 = FUN_00402e8c(param_2,(int)&PTR_TWinControl_vmt_000_00420fa8);
  if ((char)uVar2 == '\0') {
    bVar1 = FUN_0042abb0((int)param_1);
    if (bVar1) {
      FUN_00424c10((int)param_2,*(char *)((int)param_2 + 0x47),'\0');
    }
  }
  else {
    FUN_004275dc(param_2,'\x01');
    FUN_00427e1c(param_2);
  }
  FUN_00427648((int)param_1,param_2);
  FUN_00425780((int)param_1,0xb02c,param_2,0);
  FUN_004273ac(param_1);
  return;
}


