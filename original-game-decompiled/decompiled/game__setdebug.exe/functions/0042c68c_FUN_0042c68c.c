
/* ==== FUN_0042c68c @ 0042c68c ==== 
 * signature: undefined __register FUN_0042c68c(int param_1)
 * body: 0042c68c-0042c7db
 */

void FUN_0042c68c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_18 [4];
  int local_8;
  
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(*(int *)(param_1 + 0x1c) + 0x6c) == 0)) {
    *(undefined1 *)(*(int *)(param_1 + 4) + 0x8c) = *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x10)
    ;
    local_8 = param_1;
    iVar1 = FUN_0042c464(param_1,'\x02');
    iVar2 = FUN_0042c464(local_8,'\x01');
    uVar3 = FUN_0042c664();
    if ((char)uVar3 != '\0') {
      if (*(char *)(*(int *)(local_8 + 0x14) + 0x10) == '\x01') {
        iVar1 = iVar1 - *(int *)(*(int *)(local_8 + 0x1c) + 0xc);
      }
      else {
        iVar2 = iVar2 - *(int *)(*(int *)(local_8 + 0x1c) + 0xc);
      }
    }
    if (((*(int *)(local_8 + 0xc) != 0) ||
        (((*(int *)(local_8 + 0x14) != *(int *)(*(int *)(local_8 + 0x1c) + 100) &&
          (*(char *)(*(int *)(local_8 + 0x14) + 0x10) ==
           *(char *)(*(int *)(*(int *)(local_8 + 0x1c) + 100) + 0x10))) &&
         (*(int *)(local_8 + 0x20) < *(int *)(*(int *)(local_8 + 0x1c) + 0x68))))) ||
       ((iVar4 = *(int *)(*(int *)(local_8 + 0x1c) + 100),
        *(char *)(*(int *)(local_8 + 0x14) + 0x10) != *(char *)(iVar4 + 0x10) &&
        (*(int *)(local_8 + 0x20) < *(int *)(iVar4 + 0x20))))) {
      if (*(char *)(*(int *)(local_8 + 0x14) + 0x10) == '\x01') {
        iVar2 = iVar2 - *(int *)(*(int *)(local_8 + 0x1c) + 0xc);
      }
      else {
        iVar1 = iVar1 - *(int *)(*(int *)(local_8 + 0x1c) + 0xc);
      }
    }
    piVar6 = local_18;
    iVar4 = FUN_0042c3f8(local_8,'\x01');
    iVar5 = FUN_0042c3f8(local_8,'\x02');
    FUN_0040e5c8(iVar5,iVar4,iVar1,piVar6,iVar2);
    (**(code **)**(undefined4 **)(local_8 + 0x1c))
              (*(undefined4 **)(local_8 + 0x1c),*(undefined4 *)(local_8 + 4),local_18);
    FUN_0042421c(*(int **)(local_8 + 4),local_18);
  }
  return;
}


