
/* ==== TTabSheet.set_PageIndex @ 004856ec ==== 
 * signature: undefined __register TTabSheet.set_PageIndex(int param_1, int param_2)
 * body: 004856ec-0048577e
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TTabSheet_set_PageIndex(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_1c;
  undefined1 local_18;
  int local_14;
  undefined1 local_10;
  
  if (*(int *)(param_1 + 500) != 0) {
    iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 500) + 0x240) + 8) + -1;
    if (iVar3 < param_2) {
      local_18 = 0;
      local_10 = 0;
      local_1c = param_2;
      local_14 = iVar3;
      uVar1 = FUN_0040b6d0((int)&DAT_0040e844,'\x01',(undefined4 *)PTR_FUN_004ab690,1,&local_1c);
      FUN_004036f4(uVar1);
    }
    iVar3 = FUN_004855fc(param_1);
    iVar2 = TTabSheet_get_PageIndex(param_1);
    FUN_004103a4(*(int **)(*(int *)(param_1 + 500) + 0x240),iVar2,param_2);
    if (-1 < iVar3) {
      FUN_004855fc(param_1);
      FUN_00485ee0(*(int *)(param_1 + 500),iVar3);
    }
  }
  return;
}


