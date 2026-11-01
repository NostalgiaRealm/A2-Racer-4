
/* ==== FUN_0042fbf4 @ 0042fbf4 ==== 
 * signature: char __register FUN_0042fbf4(int * param_1, int * param_2, int * param_3)
 * body: 0042fbf4-0042fc8e
 */

char FUN_0042fbf4(int *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  char cVar2;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_20 = *param_2;
  local_1c = *param_3;
  uVar1 = FUN_0042f5ec(param_1,&local_20,&local_1c);
  if ((char)uVar1 != '\0') {
    local_18 = local_20;
    local_14 = local_1c;
    if ((((char)param_1[0x13] == '\0') ||
        (((uVar1 = FUN_0042f580(param_1,&local_18,&local_14), (char)uVar1 != '\0' &&
          (local_18 == local_20)) && (local_14 == local_1c)))) ||
       (uVar1 = FUN_0042f5ec(param_1,&local_18,&local_14), (char)uVar1 != '\0')) {
      cVar2 = '\x01';
    }
    else {
      cVar2 = '\0';
    }
    if (cVar2 != '\0') {
      *param_2 = local_18;
      *param_3 = local_14;
    }
    return cVar2;
  }
  return '\0';
}


