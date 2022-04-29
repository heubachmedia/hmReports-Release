## hmX_DETOKENIZE CTX TO ARRAYS (Context ; Method ; arrayType ; arrayNum ; arrayText ; arrayDate)
###### Introduced in v3.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Context|Longint|→|Execution context
|Method|Text|→|Method name
|ArrayType|Array|←|<- Token types
|ArrayNum|Array|←|<- Token real numbers
|ArrayText|Array|←|<- Token texts
|ArrayDate|Array|←|<- Token dates

### Description
The command *hmX_DETOKENIZE CTX TO ARRAYS* returns four synchronized arrays with information about each token within the method of the given context. The size of these arrays are the count of the tokens.
The *arrayType* returns the type of the token. According to each type, the arrays *arrayNum*, *arrayText* or *arrayDate* returns information about each token.

For the list of possible tokens, see [hmX_DETOKENIZE TO ARRAYS](hmX_DetokenizeToArrays.md).
