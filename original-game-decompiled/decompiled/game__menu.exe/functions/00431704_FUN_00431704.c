
/* ==== FUN_00431704 @ 00431704 ==== 
 * signature: undefined __register FUN_00431704(int * param_1, int * param_2)
 * body: 00431704-0043177e
 */

void FUN_00431704(int *param_1,int *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  
  FUN_0042f720((int)param_1,0xb036,param_2,0);
  uVar2 = FUN_00403114(param_2,(int)&PTR_TWinControl_vmt_000_0042ac0c);
  if ((char)uVar2 == '\0') {
    bVar1 = FUN_00434cdc((int)param_1);
    if (bVar1) {
      FUN_0042eb70((int)param_2,*(char *)((int)param_2 + 0x47),'\0');
    }
  }
  else {
    FUN_0043157c(param_2,'\x01');
    FUN_00431dbc(param_2);
  }
  FUN_004315e8((int)param_1,param_2);
  FUN_0042f720((int)param_1,0xb02c,param_2,0);
  FUN_0043134c(param_1);
  return;
}


