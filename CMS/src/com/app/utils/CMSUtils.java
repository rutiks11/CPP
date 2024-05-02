package com.app.utils;

import java.time.LocalDate;
import java.time.LocalTime;
import java.util.ArrayList;
import java.util.List;

import com.app.CMSException.CMSException;
import com.app.core.Customer;
import com.app.core.ServicePlan;

public class CMSUtils 
{
	public static Customer authenticationCustomer(String email,String password,List<Customer> customers) throws CMSException
	{
		// Passing the Object to the contains method
			
			Customer cust = new Customer(email);
			int index = customers.indexOf(cust);
		
			if(index==-1)
				throw new CMSException("User Does not Exists ");
		
			Customer user = customers.get(index);
			if((user.getPassword()).equals(password))
			{
				System.out.println("Successfully Login..!!!");
				return user;
			}
		
		
		throw new CMSException("Invalid Password");
	}
	
	public static void deletecustomer(Customer cust, List<Customer> list)
	{
		if(list.remove(cust))
			System.out.println("User Deleted...");
	}
	
	public static List<Customer> populateCustomers() {
		Customer a1 = new Customer("Rutik", "Shinde",  "rutikshinde11@gmail.com" , "Rts@11" , 1000.0d , LocalDate.parse("2000-10-11"), ServicePlan.SILVER);
		Customer a2 = new Customer("Shubham", "Shinde",  "shubh11@gmail.com" , "Rts@11" , 2000.0d , LocalDate.parse("2000-10-11"), ServicePlan.GOLD);
		Customer a3 = new Customer("Sameer", "Shinde",  "sameer22@gmail.com" , "Rts@11" , 10000.0d , LocalDate.parse("2000-10-11"), ServicePlan.PLATINUM);
		Customer a4 = new Customer("Akshay", "Shinde",  "aks11@gmail.com" , "Rts@11" , 1000.0d , LocalDate.parse("2000-10-11"), ServicePlan.SILVER);
		Customer a5 = new Customer("Rahul", "Shinde",  "rahul11@gmail.com" , "Rts@11" , 2000.0d , LocalDate.parse("2000-10-11"), ServicePlan.GOLD);
		Customer a6 = new Customer("Prashant", "Shinde",  "prashant11@gmail.com" , "Rts@11" , 1000.0d , LocalDate.parse("2000-10-11"), ServicePlan.SILVER);
		Customer a7 = new Customer("Abhishek", "Shinde",  "abhi@gmail.com" , "Rts@11" , 10000.0d , LocalDate.parse("2000-10-11"), ServicePlan.PLATINUM);
		
		Customer[] accts = { a1, a2, a3, a4, a5, a6, a7 };
		List<Customer> list = new ArrayList<>();	// up casting
		for (Customer a : accts)
			list.add(a);
		
		return list;
	}
}
