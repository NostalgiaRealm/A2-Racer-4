
/* ==== EHeapException.FreeInstance @ 0040aac4 ==== 
 * signature: undefined EHeapException.FreeInstance(void)
 * body: 0040aac4-0040aacf
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void EHeapException_FreeInstance(int *param_1)

{
  if ((char)param_1[3] != '\0') {
    TObject_FreeInstance(param_1);
  }
  return;
}


