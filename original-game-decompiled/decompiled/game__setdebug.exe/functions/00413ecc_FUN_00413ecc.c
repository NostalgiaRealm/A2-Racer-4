
/* ==== FUN_00413ecc @ 00413ecc ==== 
 * signature: int __register FUN_00413ecc(int param_1, char * param_2)
 * body: 00413ecc-00413f18
 */

int FUN_00413ecc(int param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (((param_2 != (char *)0x0) && (*(int *)(param_1 + 0x10) != 0)) &&
     (iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 8), -1 < iVar3 + -1)) {
    iVar4 = 0;
    do {
      iVar1 = FUN_0040f024(*(undefined4 **)(param_1 + 0x10),iVar4);
      uVar2 = FUN_00407ad0(*(char **)(iVar1 + 8),param_2);
      if ((char)uVar2 != '\0') {
        return iVar1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}


