
/* ==== FUN_00407ea8 @ 00407ea8 ==== 
 * signature: int __register FUN_00407ea8(undefined * param_1, undefined * param_2)
 * body: 00407ea8-00407ef4
 */

int FUN_00407ea8(undefined *param_1,undefined *param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_00403c38((int)param_2);
  pcVar2 = FUN_00403dfc(param_1);
  do {
    if (iVar1 < 1) {
      return iVar1;
    }
    if ((param_2[iVar1 + -1] != '\0') &&
       (pcVar3 = FUN_00408194(pcVar2,param_2[iVar1 + -1]), pcVar3 != (char *)0x0)) {
      uVar4 = FUN_0040b1fc(param_2,iVar1);
      if ((char)uVar4 != '\x02') {
        return iVar1;
      }
      iVar1 = iVar1 + -1;
    }
    iVar1 = iVar1 + -1;
  } while( true );
}


