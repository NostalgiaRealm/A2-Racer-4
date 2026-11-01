
/* ==== FUN_0043651c @ 0043651c ==== 
 * signature: undefined __register FUN_0043651c(int param_1)
 * body: 0043651c-00436562
 */

void FUN_0043651c(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1;
  if (param_1 != *(int *)(*(int *)(param_1 + 0x1c) + 100)) {
    iVar2 = *(int *)(param_1 + 0x14);
  }
  if (*(char *)(iVar2 + 0x10) != '\x01') {
    if (*(char *)(iVar2 + 0x10) == '\x02') {
      FUN_004365ac(param_1,'\x02');
    }
    else {
      piVar1 = FUN_0040b5d8((int *)&DAT_00407624,'\x01',(undefined4 *)0x0);
      FUN_004036f4(piVar1);
    }
    return;
  }
  FUN_004365ac(param_1,'\x01');
  return;
}


