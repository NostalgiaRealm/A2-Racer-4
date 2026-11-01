
/* ==== TComponent.vmt_020 @ 004159e8 ==== 
 * signature: undefined __register TComponent.vmt_020(int param_1, int param_2, char * param_3, char * param_4)
 * body: 004159e8-00415a65
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TComponent_vmt_020(int param_1,int param_2,char *param_3,char *param_4)

{
  undefined4 uVar1;
  int iVar2;
  char *local_10;
  undefined1 local_c;
  char *local_8;
  
  local_8 = param_3;
  if (param_2 != 0) {
    uVar1 = FUN_0040830c(param_3,param_4);
    if (((char)uVar1 == '\0') && (param_1 == *(int *)(param_2 + 4))) {
      iVar2 = FUN_00415a80(param_1,param_4);
      if (iVar2 != 0) {
        local_10 = param_4;
        local_c = 0xb;
        uVar1 = FUN_0040b6d0((int)&DAT_0040e954,'\x01',(undefined4 *)PTR_PTR_004ab870,0,&local_10);
        FUN_004036f4(uVar1);
      }
    }
  }
  if (((*(byte *)(param_1 + 0x20) & 0x10) != 0) && (*(int *)(param_1 + 4) != 0)) {
    (**(code **)(**(int **)(param_1 + 4) + 0x20))(*(int **)(param_1 + 4),param_2,local_8,param_4);
  }
  return;
}


