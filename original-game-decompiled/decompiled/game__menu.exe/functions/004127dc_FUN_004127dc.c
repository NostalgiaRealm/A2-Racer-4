
/* ==== FUN_004127dc @ 004127dc ==== 
 * signature: undefined __register FUN_004127dc(int param_1, int * param_2)
 * body: 004127dc-0041282b
 */

void FUN_004127dc(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_1c;
  code *pcStackY_18;
  
  pcStackY_18 = (code *)0x4127f8;
  piVar1 = FUN_00412ce0((int *)&PTR_TFiler_vmt_000_0040f470,'\x01',param_1,0x1000);
  pcStackY_18 = thunk_FUN_004036bc;
  uStackY_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_1c;
  FUN_00414a5c(piVar1,param_2);
  *in_FS_OFFSET = uStackY_1c;
  pcStackY_18 = (code *)0x41282b;
  FUN_00402f9c(piVar1);
  return;
}


