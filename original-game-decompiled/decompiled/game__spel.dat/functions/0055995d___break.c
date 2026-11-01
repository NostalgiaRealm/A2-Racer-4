
/* ==== __break @ 0055995d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0055995d-0055995d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


