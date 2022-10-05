DOLLAR_COMPRA = 550
DOLLAR_VENTA = 562

# Currency Converter
def convert_dollar_to_colons(amount = 0)
    amount * DOLLAR_COMPRA
end

def convert_colons_to_dollar(amount = 0)
    amount / DOLLAR_VENTA
end

# Accounts
accounts_dollar = {
    "Bank Dolares: " => 0,
    "Cash Dolares: " => 0,
    "Paypal Dolares: " => 0
}

accounts_colon = {
    "Bank Colones: " => 0,
    "Cash Colones: " => 0
}

# Ask to the user
accounts_dollar.each_key do |account|
    print account
    accounts_dollar[account] = gets.to_f
end

accounts_colon.each_key do |account|
    print account
    accounts_colon[account] = gets.to_f
end

# Sum each accounts by currency
accounts_dollar_total = accounts_dollar.values.inject{|sum,x| sum + x }
accounts_colon_total = accounts_colon.values.inject{|sum,x| sum + x }

# Sum total accounts
dollar_total = accounts_dollar_total + convert_colons_to_dollar(accounts_colon_total)
colon_total = accounts_colon_total + convert_dollar_to_colons(accounts_dollar_total)

# Print results
puts "============================"
puts "Total de Cuentas en Dolares: #{accounts_dollar_total.round(2)}"
puts "Total de Cuentas en Colones: #{accounts_colon_total.round(2)}"
puts "============================"
puts "Total en Dolares: $#{dollar_total.round(2)}"
puts "Total en Colones: ₡#{colon_total.round(2)}"
