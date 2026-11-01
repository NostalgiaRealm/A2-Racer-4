
/* ==== FUN_00407e78 @ 00407e78 ==== 
 * signature: undefined * __register FUN_00407e78(undefined * param_1)
 * body: 00407e78-00407ea5
 */

undefined * FUN_00407e78(undefined *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00403c38((int)param_1);
  if (iVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = param_1 + iVar1 + -1;
    uVar2 = FUN_0040b1fc(param_1,iVar1);
    if ((char)uVar2 == '\x02') {
      puVar3 = puVar3 + -1;
    }
  }
  return puVar3;
}


