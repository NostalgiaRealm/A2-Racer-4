
/* ==== FUN_0041ae2c @ 0041ae2c ==== 
 * signature: undefined __register FUN_0041ae2c(int * param_1, char param_2)
 * body: 0041ae2c-0041af08
 */

void FUN_0041ae2c(int *param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  code *pcVar2;
  undefined **ppuVar3;
  undefined4 uStack_38;
  code *pcStack_34;
  undefined1 *puStack_30;
  undefined4 in_stack_ffffffd4;
  undefined4 in_stack_ffffffd8;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  uVar1 = 0;
  local_8 = (undefined4 *)0x0;
  local_c = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  if (param_2 != '\0') {
    puStack_30 = (undefined1 *)0x41ae43;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,0,in_stack_ffffffd4,in_stack_ffffffd8);
    uVar1 = extraout_ECX;
  }
  pcStack_34 = thunk_FUN_004036bc;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  FUN_00402f6c(param_1,'\0',uVar1);
  uVar1 = 0;
  ppuVar3 = &PTR_TPersistent_vmt_000_00417234;
  FUN_00405808((undefined4 *)PTR_PTR_004ab838,(int *)&local_8);
  FUN_0041afac(param_1,&DAT_0041af38,local_8,ppuVar3,uVar1);
  uVar1 = 0;
  ppuVar3 = &PTR_TPersistent_vmt_000_00417234;
  FUN_00405808((undefined4 *)PTR_PTR_004ab684,(int *)&local_c);
  FUN_0041afac(param_1,&DAT_0041af44,local_c,ppuVar3,uVar1);
  uVar1 = 0;
  ppuVar3 = &PTR_TPersistent_vmt_000_004174e4;
  FUN_00405808((undefined4 *)PTR_PTR_004ab680,(int *)&local_10);
  FUN_0041afac(param_1,&DAT_0041af50,local_10,ppuVar3,uVar1);
  uVar1 = 0;
  pcVar2 = FUN_004173a4;
  FUN_00405808((undefined4 *)PTR_PTR_004ab678,(int *)&local_14);
  FUN_0041afac(param_1,FUN_0041af5c,local_14,pcVar2,uVar1);
  *in_FS_OFFSET = pcVar2;
  FUN_00403c80((int *)&local_14,4);
  return;
}


